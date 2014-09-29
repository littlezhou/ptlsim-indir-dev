//
// PTLsim: Cycle Accurate x86-64 Simulator
// Branch Prediction
//
// Copyright 2003-2008 Matt T. Yourst <yourst@yourst.com>
//
// This program is free software; it is licensed under the
// GNU General Public License, Version 2.
//

#include <branchpred.h>
#include <stats.h>
#include <ooocore.h> 

static VPCPredictorUpdate indirs[OutOfOrderModel::ROB_SIZE][MAX_VPC_ITERS]; 
                

static const W64 vpc_constants[64]={
	0x71e05c389a3c,
	0xac20af7ee7ca,  
	0x4c9d0bfadfe9,
	0x9c5a00ad011d,
        0x561f4945163a,
	0xc1540b4c0803, 
	0x17f1b69c5652,
	0xb20fff87ef51,
	0x3586135951a1,
	0x19ef79810557,
	0x8a783245abec, 
	0x91aa64b7f410,  
	0xb87ccca7a11b,
	0x2194e702179d,
	0xc9419b1819d6,
	0x133fb4a52252, 
	0x4d548b77dd5a,
	0x07e88af59f0e,
	0x38f79660a87d, 
	0x1e2dad252f4b,
	0x867befa7c556,
	0xde0b1dc80da0, 
	0x8d6f794efd35,
	0xe81a2a9eccd0,    
	0xbd8344484044,
	0x50f3073f7e54,
	0xfa45354e2232,
	0x3e064dec9aca,
	0x52a09db15a9e,
	0x771283ce886d,
	0x2ca25a46381b,
	0xdfaec966b5d7, 	
       0x3e601e4c4d09,
0x5b85da34dfe4,
0x0c8664774cdf,
0xfcf6fda2eb79,
0x74f004ebd9dd,
0x1a32e6aec476,
0xfbb271a97647,
0x63c1570d583e,
0x6f989a56a0ce,
0x4f351edaa2dc,
0xeb1b7c6a2b8f,
0x27e61f1959fd,
0x2b5a5f6429fb,
0xae329809f767,
0x965ceab2aceb,
0x3b7be5a00dd8,
0xf3fe3cfe1d2a,
0x10a72a900a07,
0xcaa2bc44b98c,
0x4e221972fd66,
0xad35314a210b,
0x4fb7cafb67d1,
0x95e5e4bd0cab,
0xf039f718a491,
0x26b91d7746b5,
0x4f32e3c3ff82,
0x3bd3c98b202f,
0xdc4bfc67717f,
0xf9e266aa46d8,
0x2b2132ebd18d,
0x5ff73226a8b4,
0xd3ffd165ccf1
};  
    
template <int SIZE>
struct BimodalPredictor {
  array<byte, SIZE> table;

  void reset() {
    foreach (i, SIZE) table[i] = bit(i, 0) + 1;
  }

  inline int hash(W64 branchaddr) {
    return lowbits((branchaddr >> 16) ^ branchaddr, log2(SIZE));
  }

  byte* predict(W64 branchaddr) {
    return &table[hash(branchaddr)];
  }
};

template <int L1SIZE, int L2SIZE, int SHIFTWIDTH, bool HISTORYXOR>
struct TwoLevelPredictor {
  array<int, L1SIZE> shiftregs; // L1 history shift register(s)
  array<byte, L2SIZE> L2table;  // L2 prediction state table

  void reset() {
    // initialize counters to weakly this-or-that
    foreach (i, L2SIZE) L2table[i] = bit(i, 0) + 1;
  }

  byte* predict(W64 branchaddr) {
    int L1index = lowbits(branchaddr, log2(L1SIZE));
    int L2index = shiftregs[L1index];

    if (HISTORYXOR) {
      L2index ^= branchaddr;
    } else {
      L2index |= branchaddr << SHIFTWIDTH;
	  }

    L2index = lowbits(L2index, log2(L2SIZE));

    return &L2table[L2index];
  }
};

struct BTBEntry {
  W64 target;		// last destination of branch when taken
  W64 count;
  void reset() {
    target = 0;
	count = 0;
 }

  ostream& print(ostream& os, W64 tag) const {
    os << (void*)(Waddr)target;
    return os;
  }
};

template <int SETCOUNT, int WAYCOUNT>
struct BranchTargetBuffer: public AssociativeArray<W64, BTBEntry, SETCOUNT, WAYCOUNT, 1> { };

template <int SIZE> struct ReturnAddressStack;

template <int SIZE>
ostream& operator <<(ostream& os, ReturnAddressStack<SIZE>& ras);

ostream& operator <<(ostream& os, const ReturnAddressStackEntry& e) {
  os << "  ", intstring(e.idx, 4), ": uuid ", intstring(e.uuid, 16), ", rip ", (void*)(Waddr)e.rip, endl;
  return os;
}

// Enable to debug the return address stack (RAS) predictor mechanism
// #define DEBUG_RAS

template <int SIZE>
struct ReturnAddressStack: public Queue<ReturnAddressStackEntry, SIZE> {
  typedef Queue<ReturnAddressStackEntry, SIZE> base_t;

  void push(W64 uuid, W64 rip, ReturnAddressStackEntry& old) {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "ReturnAddressStack::push(uuid ", uuid, ", rip ", (void*)(Waddr)rip, "):", endl;
#endif
    if (base_t::full()) {
      if (logable(5)) logfile << "  Return address stack overflow: removing oldest entry to make space", endl;
      stats.ooocore.branchpred.ras.overflows++;
      base_t::pophead();
    }

    ReturnAddressStackEntry& e =* base_t::push();
    assert(&e);

    old = e;
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "  Old entry: ", old, endl;
#endif

    e.uuid = uuid;
    e.rip = rip;

    stats.ooocore.branchpred.ras.pushes++;
#ifdef DEBUG_RAS
    if (logable(5)) { logfile << *this; }
#endif
  }

  ReturnAddressStackEntry& pop(ReturnAddressStackEntry& old) {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "ReturnAddressStack::pop():", endl;
#endif
    if (base_t::empty()) {
      stats.ooocore.branchpred.ras.underflows++;
      if (logable(5)) logfile << "  Return address stack underflow: returning entry with zero fields", endl;
      old.idx = -1;
      old.uuid = 0;
      old.rip = 0;
      return old;
    }

    ReturnAddressStackEntry& e =* base_t::pop();
    assert(&e);
    old = e;
#ifdef DEBUG_RAS
    if (logable(5)) { logfile << "  Old entry: ", old, endl; logfile << *this; }
#endif

    stats.ooocore.branchpred.ras.pops++;

    return e;
  }

  W64 peek() {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "ReturnAddressStack::peek():", endl;
#endif
    if (base_t::empty()) {
      if (logable(5)) logfile << "  Return address stack is empty: returning bogus rip 0", endl;
      return 0;
    }

#ifdef DEBUG_RAS
    if (logable(5)) { logfile << "  Peeking entry ", (*base_t::peektail()); }
#endif

    return base_t::peektail()->rip;
  }

  //
  // Pop a speculative push from the stack
  //
  void annulpush(const ReturnAddressStackEntry& old) {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "ReturnAddressStack::annulpush(old index ", old.idx, ", uuid ", old.uuid, ", rip ", (void*)(Waddr)old.rip, "):", endl;
#endif

    if (base_t::empty()) {
#ifdef DEBUG_RAS
      if (logable(5)) logfile << "  Cannot annul: return address stack is empty", endl;
#endif
      return;
    }

    ReturnAddressStackEntry& e =* base_t::peektail();
    e.uuid = old.uuid;
    e.rip = old.rip;

    ReturnAddressStackEntry dummy;
    pop(dummy);
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "  Popped speculative push; e.index = ", e.index(), " vs tail ", base_t::tail, endl;
    assert(e.index() == base_t::tail);
#endif

    stats.ooocore.branchpred.ras.annuls++;
  }

  //
  // Push the old data back on the stack
  //
  void annulpop(const ReturnAddressStackEntry& old) {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "ReturnAddressStack::annulpop(old index ", old.idx, ", uuid ", old.uuid, ", rip ", (void*)(Waddr)old.rip, "):", endl;
#endif

    if (base_t::full()) {
#ifdef DEBUG_RAS
      if (logable(5)) logfile << "  Cannot annul: stack is full", endl;
#endif
      return;
    }
    ReturnAddressStackEntry dummy;

#ifdef DEBUG_RAS
    if (logable(5)) logfile << "  Pushed speculative pop; old.index = ", old.index(), " vs tail ", base_t::tail, endl;
    assert(old.index() == base_t::tail);
#endif
    push(old.uuid, old.rip, dummy);
    stats.ooocore.branchpred.ras.annuls++;
  }
};

template <int SIZE>
ostream& operator <<(ostream& os, ReturnAddressStack<SIZE>& ras) {
  ras.print(os);
  return os;
}

template <int METASIZE, int BIMODSIZE, int L1SIZE, int L2SIZE, int SHIFTWIDTH, bool HISTORYXOR, int BTBSETS, int BTBWAYS, int RASSIZE>
struct CombinedPredictor {
  TwoLevelPredictor<L1SIZE, L2SIZE, SHIFTWIDTH, HISTORYXOR> twolevel;
  BimodalPredictor<BIMODSIZE> bimodal;
  BimodalPredictor<METASIZE> meta;

  BranchTargetBuffer<BTBSETS, BTBWAYS> btb;
  ReturnAddressStack<RASSIZE> ras;
   
  
 
  void reset() {
    twolevel.reset();
    bimodal.reset();
    meta.reset();
    btb.reset();
    ras.reset();
  }

  void updateras(PredictorUpdate& predinfo, W64 rip) {
    if unlikely (predinfo.flags & BRANCH_HINT_RET) {
      predinfo.ras_push = 0;
      ras.pop(predinfo.ras_old);
    } else if likely (predinfo.flags & BRANCH_HINT_CALL) {
      predinfo.ras_push = 1;
      ras.push(predinfo.uuid, rip, predinfo.ras_old);
    }
  }

  //
  // NOTE: branchaddr should point to first byte *after* branching insn,
  // since x86 has variable length instructions.
  //
  W64 predict(PredictorUpdate& update, int type, W64 branchaddr, W64 target) {
    update.cp1 = null;
    update.cp2 = null;
    update.cpmeta = null;
    update.flags = type;

    if unlikely ((type & (BRANCH_HINT_COND|BRANCH_HINT_INDIRECT)) == 0) {
      // Unconditional: always return target
      return target;
    }

    if likely (type & BRANCH_HINT_COND) {
      byte& bimodalctr = *bimodal.predict(branchaddr);
      byte& twolevelctr = *twolevel.predict(branchaddr);
      byte& metactr = *meta.predict(branchaddr);
      update.cpmeta = &metactr;
      update.meta  = (metactr >= 2);
      update.bimodal = (bimodalctr >= 2);
      update.twolevel  = (twolevelctr >= 2);
      if (metactr >= 2) {
        update.cp1 = &twolevelctr;
	      update.cp2 = &bimodalctr;
	    } else {
	      update.cp1 = &bimodalctr;
	      update.cp2 = &twolevelctr;
	    }
    }

    //
    // If this is a return, find next entry that would be popped
    // Caller is responsible for using updateras() to update the
    // RAS once annulable resources have been allocated for this
    // return insn.
    //
    if unlikely (type & BRANCH_HINT_RET) {
#ifdef DEBUG_RAS
      if (logable(5)) logfile << "Peeking RAS for uuid ", update.uuid, ":", endl;
#endif
      return ras.peek();
    }

    BTBEntry* pbtb = btb.probe(branchaddr);

    // if this is a jump, ignore predicted direction; we know it's taken.
    if unlikely (!(type & BRANCH_HINT_COND)) {
        
		return predict_indir(update,branchaddr,target);
  	   // return (pbtb ? pbtb->target : target);
    
	}

    //
    // Predict conditional branch:
    //
    return (*(update.cp1) >= 2) ? target : branchaddr;
  }
        


W64 predict_vpc(VPCPredictorUpdate& update, W64 branchaddr, W64 target, bool& taken, bool& btbmiss, W64& btbtarget,W64& btbcount)
{
    update.cp1 = null;
    update.cp2 = null;
    update.cpmeta = null;
    

   

    
      byte& bimodalctr = *bimodal.predict(branchaddr);
      byte& twolevelctr = *twolevel.predict(branchaddr);
      byte& metactr = *meta.predict(branchaddr);
      update.cpmeta = &metactr;
      update.meta  = (metactr >= 2);
      update.bimodal = (bimodalctr >= 2);
      update.twolevel  = (twolevelctr >= 2);
      if (metactr >= 2) {
        update.cp1 = &twolevelctr;
	      update.cp2 = &bimodalctr;
	    } else {
	      update.cp1 = &bimodalctr;
	      update.cp2 = &twolevelctr;
	    }
    
	taken = (*(update.cp1) >= 2) ? true : false;
    BTBEntry* pbtb = btb.probe(branchaddr);
	if(!pbtb) { btbmiss = true; }  
	else 
	{ 
		btbtarget = target = pbtb->target; 
		btbcount = pbtb->count;
	}
    
    
    //
    // Predict conditional branch:
    //
   //  return (*(update.cp1) >= 2) ? target : branchaddr;
     return target;
}          

void fill_in_predict(PredictorUpdate& update, W64 branchaddr)
{
	 update.cp1 = null;
    update.cp2 = null;
    update.cpmeta = null;





      byte& bimodalctr = *bimodal.predict(branchaddr);
      byte& twolevelctr = *twolevel.predict(branchaddr);
      byte& metactr = *meta.predict(branchaddr);
      update.cpmeta = &metactr;
      update.meta  = (metactr >= 2);
      update.bimodal = (bimodalctr >= 2);
      update.twolevel  = (twolevelctr >= 2);
      if (metactr >= 2) {
        update.cp1 = &twolevelctr;
	      update.cp2 = &bimodalctr;
	    } else {
	      update.cp1 = &bimodalctr;
	      update.cp2 = &twolevelctr;
	    }
}
  
W64 predict_indir(PredictorUpdate& update, W64 branchaddr, W64 target)
{                        
	         
	   
		int last_idx = -1;    
		W64 max_count=0;
	    W64 branch_targets[MAX_VPC_ITERS]={0};
		W64 pred_target=0;  
		W64 last_pred_target=0;  
		bool btbmiss = false;
		bool had_target = false;
		int i;  
	    if (logable(5)) logfile << "predict_indir. branchaddr: ", hexstring(branchaddr,48), " target: ", hexstring(target,48), endl;
		for(i=0;i<MAX_VPC_ITERS;++i)
		{                                            
			W64 btbtarget = 0;   
			W64 btbcount = 0;
			btbmiss = false; 
			bool taken = false;
			W64 baddr = (!i) ? branchaddr : branchaddr ^ vpc_constants[i];
			pred_target = predict_vpc(indirs[update.uuid%OutOfOrderModel::ROB_SIZE][i],baddr,target,taken,btbmiss,btbtarget,btbcount); 
			if(taken)
			{                  
			   // update.idx = i;   
			 
				if (logable(5)) logfile << "btbmiss: ", btbmiss, " returning pred_target: ", hexstring(pred_target,48), endl;
				return pred_target;
			}
			else
			{
				if(!btbmiss)
				{   
					had_target = true;  
					if(btbcount >= max_count)
					{     
						max_count = btbcount;
						last_pred_target = btbtarget;
						last_idx = i; 
				    }
				}
				else
				{
					// we missed in the BTB stop and send the 
					break;
				}
			}
		} 
		// may want to return another legit BTB target        
	   // logfile <<  "returning: ", target, endl;   
		// pick the most frequently taken branch otherwise, return input parameter
		return had_target? last_pred_target : target;
  }
        

  void update(PredictorUpdate& update, W64 branchaddr, W64 target, bool indirPredCorrect) {
    int type = update.flags;

    bool taken = (target != branchaddr);

    //
    // keep stats about JMPs; also, but don't change any pred state for JMPs
    // which are returns.
    //
    if unlikely (type & BRANCH_HINT_INDIRECT) {
      if unlikely (type & BRANCH_HINT_RET) return;  
      else { return update_indir(update,branchaddr,target,indirPredCorrect); }
    }

    //
    // L1 table is updated unconditionally for combining predictor too:
    //
    if likely (type & BRANCH_HINT_COND) {
      int l1index = lowbits(branchaddr, log2(L1SIZE));
      twolevel.shiftregs[l1index] = lowbits((twolevel.shiftregs[l1index] << 1) | taken, SHIFTWIDTH);
    }

    //
    // Find BTB entry if it's a taken branch (don't allocate for non-taken)
    //
    BTBEntry* pbtb = (taken) ? btb.select(branchaddr) : null;

    //
    // Now p is a possibly null pointer into the direction prediction table, 
    // and pbtb is a possibly null pointer into the BTB (either to a 
    // matched-on entry or a victim which was LRU in its set)
    //

    //
    // update state (but not for jumps)
    //
    if likely (update.cp1) {
      byte& counter = *update.cp1;
      counter = clipto(counter + (taken ? +1 : -1), 0, 3);
    }

    //
    // combining predictor also updates second predictor and meta predictor
    // second direction predictor
    //
    if likely (update.cp2) {
      byte& counter = *update.cp2;
      counter = clipto(counter + (taken ? +1 : -1), 0, 3);
    }

    //
    // Update meta predictor
    //
    if likely (update.cpmeta) {
      if (update.bimodal != update.twolevel) {
        //
        // We only update meta predictor if directions were different.
        // We increment the counter if the twolevel predictor was correct; 
        // if the bimodal predictor was correct, we decrement it.
        //
        byte& counter = *update.cpmeta;
        bool twolevel_or_bimodal = (update.twolevel == taken);
        counter = clipto(counter + (twolevel_or_bimodal ? +1 : -1), 0, 3);
      }
    }

    //
    // update BTB (but only for taken branches)
    //
    if likely (pbtb) {
      // Update either the entry selected above, or if not found, use the LRU entry:
      pbtb->target = target;
    }
  }
       
  void update_indir(PredictorUpdate& update, W64 branchaddr, W64 target, bool indirPredCorrect)
  {      
		bool found=false; 
		W64 least_count=0xFFFFFFFFFFFFFF;
		W64 lru_addr = 0;
		int lru_idx = -1;
		W64 btb_miss_addr = 0; 
		int idx = -1;   
		if (logable(5)) logfile << "branchaddr: ", hexstring(branchaddr,48), " target: ", hexstring(target,48), endl;
		for(int i=0;i<MAX_VPC_ITERS;++i)
		{
	   		W64 baddr = (!i) ? branchaddr : branchaddr ^ vpc_constants[i];  
	   		BTBEntry* pbtb = btb.probe(baddr);
	 		if(!pbtb)
	   		{
		   	// we had a BTB miss  
			    if(!btb_miss_addr)
				{
					btb_miss_addr = baddr;   
					idx = i;
				}
			}
			else
			{        
			   
				if(pbtb->count < least_count)
				{
					least_count = pbtb->count;
					lru_addr = baddr;
					lru_idx = i;
				}
				if(pbtb->target == target)
				{
					// reinforce as taken  
					if (logable(5)) logfile << "reinforcing: ", hexstring(baddr,48), " with target: ", hexstring(target,48), endl;
					update_vpc(indirs[update.uuid%OutOfOrderModel::ROB_SIZE][i],baddr,target,true);     
					found = true;
					break;
					// we are done
				}   
				else
				{
					update_vpc(indirs[update.uuid%OutOfOrderModel::ROB_SIZE][i],baddr,target,false);
				}
			}               
  		}
		if(!found)
		{
			// we need to select a replacement, if we had a BTB miss then select 
			// that entry
			if(btb_miss_addr)
			{                         
			   btb.select(btb_miss_addr);
			   update_vpc(indirs[update.uuid%OutOfOrderModel::ROB_SIZE][idx],btb_miss_addr,target,true);   
			}   
			else 
			{   
			   // otherwise use the LRU  
			   assert(lru_addr);  
			   btb.select(lru_addr);   
			   update_vpc(indirs[update.uuid%OutOfOrderModel::ROB_SIZE][lru_idx],lru_addr,target,true);                     
			}
		}
	}

  void update_vpc(VPCPredictorUpdate& update, W64 branchaddr, W64 target, bool taken) 
  {
  
    //
    // L1 table is updated unconditionally for combining predictor too:
    //
   
      int l1index = lowbits(branchaddr, log2(L1SIZE));
      twolevel.shiftregs[l1index] = lowbits((twolevel.shiftregs[l1index] << 1) | taken, SHIFTWIDTH);
    

    //
    // Find BTB entry if it's a taken branch (don't allocate for non-taken)
    //
	BTBEntry* pbtb =  btb.probe(branchaddr); 
	assert(pbtb != null);
    if(taken) { pbtb->count++; } // touch for LRU purposes (initially touched whenever the addr was accessed)
   
   //
    // Now p is a possibly null pointer into the direction prediction table, 
    // and pbtb is a possibly null pointer into the BTB (either to a 
    // matched-on entry or a victim which was LRU in its set)
    //

    //
    // update state (but not for jumps)
    //
    if likely (update.cp1) {
      byte& counter = *update.cp1;
      counter = clipto(counter + (taken ? +1 : -1), 0, 3);
    }

    //
    // combining predictor also updates second predictor and meta predictor
    // second direction predictor
    //
    if likely (update.cp2) {
      byte& counter = *update.cp2;
      counter = clipto(counter + (taken ? +1 : -1), 0, 3);
    }

    //
    // Update meta predictor
    //
    if likely (update.cpmeta) {
      if (update.bimodal != update.twolevel) {
        //
        // We only update meta predictor if directions were different.
        // We increment the counter if the twolevel predictor was correct; 
        // if the bimodal predictor was correct, we decrement it.
        //
        byte& counter = *update.cpmeta;
        bool twolevel_or_bimodal = (update.twolevel == taken);
        counter = clipto(counter + (twolevel_or_bimodal ? +1 : -1), 0, 3);
      }
    }
    if(taken) { pbtb->target = target; }
    
  }
  //
  // Speculative execution can corrupt the RAS, since entries will be pushed
  // as call insns are fetched. If those call insns were along an incorrect
  // branch path, they must be annulled.
  //
  void annulras(const PredictorUpdate& predinfo) {
#ifdef DEBUG_RAS
    if (logable(5)) logfile << "Update RAS for uuid ", predinfo.uuid, ":", endl;
#endif
    if (predinfo.ras_push)
      ras.annulpush(predinfo.ras_old);
    else ras.annulpop(predinfo.ras_old);
  }
};

// template <int METASIZE, int BIMODSIZE, int L1SIZE, int L2SIZE, int SHIFTWIDTH, bool HISTORYXOR, int BTBSETS, int BTBWAYS, int RASSIZE>
// G-share constraints: METASIZE, BIMODSIZE, 1, L2SIZE, log2(L2SIZE), (HISTORYXOR = true), BTBSETS, BTBWAYS, RASSIZE
struct BranchPredictorImplementation: public CombinedPredictor<4096*65536, 4096*65536, 1, 4096*65536, 16+12, 1, 4096*8, 16*8, 1024> { };

void BranchPredictorInterface::destroy() {
  if (impl) delete impl;
  impl = null;
}

void BranchPredictorInterface::reset() {
  impl->reset();
}

void BranchPredictorInterface::init() {
  destroy();
  impl = new BranchPredictorImplementation();
  reset();
}

W64 BranchPredictorInterface::predict(PredictorUpdate& update, int type, W64 branchaddr, W64 target) {
  return impl->predict(update, type, branchaddr, target);
}

void BranchPredictorInterface::update(PredictorUpdate& update, W64 branchaddr, W64 target, bool indirPredCorrect) {
  impl->update(update, branchaddr, target, indirPredCorrect);
}

void BranchPredictorInterface::updateras(PredictorUpdate& predinfo, W64 branchaddr) {
  impl->updateras(predinfo, branchaddr);
};

void BranchPredictorInterface::annulras(const PredictorUpdate& predinfo) {
  impl->annulras(predinfo);
};

void BranchPredictorInterface::flush() { }

ostream& operator <<(ostream& os, const BranchPredictorInterface& branchpred) {
  os << branchpred.impl->ras;
  return os;
}
