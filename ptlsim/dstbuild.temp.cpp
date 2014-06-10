int main(int argc, char** argv) {
  DataStoreNodeTemplate PerContextOutOfOrderCoreStats("PerContextOutOfOrderCoreStats"); {
    DataStoreNodeTemplate& fetch = PerContextOutOfOrderCoreStats("fetch"); {
      DataStoreNodeTemplate& stop = fetch("stop"); {
        stop.summable = 1;
        stop.addint("stalled");
        stop.addint("icache_miss");
        stop.addint("fetchq_full");
        stop.addint("issueq_quota_full");
        stop.addint("bogus_rip");
        stop.addint("microcode_assist");
        stop.addint("branch_taken");
        stop.addint("full_width");
      }
      fetch.histogram("opclass", 28, opclass_names);
      fetch.histogram("width", OutOfOrderModel::FETCH_WIDTH+1, 0, OutOfOrderModel::FETCH_WIDTH, 1);
      fetch.addint("blocks");
      fetch.addint("uops");
      fetch.addint("user_insns");
    }
    DataStoreNodeTemplate& frontend = PerContextOutOfOrderCoreStats("frontend"); {
      DataStoreNodeTemplate& status = frontend("status"); {
        status.summable = 1;
        status.addint("complete");
        status.addint("fetchq_empty");
        status.addint("rob_full");
        status.addint("physregs_full");
        status.addint("ldq_full");
        status.addint("stq_full");
      }
      frontend.histogram("width", OutOfOrderModel::FRONTEND_WIDTH+1, 0, OutOfOrderModel::FRONTEND_WIDTH, 1);
      DataStoreNodeTemplate& renamed = frontend("renamed"); {
        renamed.addint("none");
        renamed.addint("reg");
        renamed.addint("flags");
        renamed.addint("reg_and_flags");
      }
      DataStoreNodeTemplate& alloc = frontend("alloc"); {
        alloc.addint("reg");
        alloc.addint("ldreg");
        alloc.addint("sfr");
        alloc.addint("br");
      }
      frontend.histogram("consumer_count", 256, 0, 255, 1);
    }
    DataStoreNodeTemplate& dispatch = PerContextOutOfOrderCoreStats("dispatch"); {
      dispatch.histogram("cluster", OutOfOrderModel::MAX_CLUSTERS, OutOfOrderModel::cluster_names);
      DataStoreNodeTemplate& redispatch = dispatch("redispatch"); {
        redispatch.addint("trigger_uops");
        redispatch.addint("deadlock_flushes");
        redispatch.addint("deadlock_uops_flushed");
        redispatch.histogram("dependent_uops", OutOfOrderModel::ROB_SIZE+1, 0, OutOfOrderModel::ROB_SIZE, 1);
      }
    }
    DataStoreNodeTemplate& issue = PerContextOutOfOrderCoreStats("issue"); {
      issue.addint("uops");
      issue.addfloat("uipc");
      DataStoreNodeTemplate& result = issue("result"); {
        result.summable = 1;
        result.addint("no_fu");
        result.addint("replay");
        result.addint("misspeculated");
        result.addint("refetch");
        result.addint("branch_mispredict");
        result.addint("exception");
        result.addint("complete");
      }
      issue.histogram("opclass", 28, opclass_names);
    }
    DataStoreNodeTemplate& writeback = PerContextOutOfOrderCoreStats("writeback"); {
      writeback.histogram("writebacks", OutOfOrderModel::PHYS_REG_FILE_COUNT, OutOfOrderModel::phys_reg_file_names);
    }
    DataStoreNodeTemplate& commit = PerContextOutOfOrderCoreStats("commit"); {
      commit.addint("uops");
      commit.addint("insns");
      commit.addfloat("uipc");
      commit.addfloat("ipc");
      DataStoreNodeTemplate& result = commit("result"); {
        result.summable = 1;
        result.addint("none");
        result.addint("ok");
        result.addint("exception");
        result.addint("skipblock");
        result.addint("barrier");
        result.addint("smc");
        result.addint("memlocked");
        result.addint("stop");
      }
      DataStoreNodeTemplate& setflags = commit("setflags"); {
        setflags.summable = 1;
        setflags.addint("yes");
        setflags.addint("no");
      }
      commit.histogram("opclass", 28, opclass_names);
    }
    DataStoreNodeTemplate& branchpred = PerContextOutOfOrderCoreStats("branchpred"); {
      branchpred.addint("predictions");
      branchpred.addint("updates");
      branchpred.histogram("cond", 2, branchpred_outcome_names);
      branchpred.histogram("indir", 2, branchpred_outcome_names);
      branchpred.histogram("ret", 2, branchpred_outcome_names);
      branchpred.histogram("summary", 2, branchpred_outcome_names);
      DataStoreNodeTemplate& ras = branchpred("ras"); {
        ras.summable = 1;
        ras.addint("pushes");
        ras.addint("overflows");
        ras.addint("pops");
        ras.addint("underflows");
        ras.addint("annuls");
      }
    }
    DataStoreNodeTemplate& dcache = PerContextOutOfOrderCoreStats("dcache"); {
      DataStoreNodeTemplate& load = dcache("load"); {
        DataStoreNodeTemplate& issue = load("issue"); {
          issue.summable = 1;
          issue.addint("complete");
          issue.addint("miss");
          issue.addint("exception");
          issue.addint("ordering");
          issue.addint("unaligned");
          DataStoreNodeTemplate& replay = issue("replay"); {
            replay.summable = 1;
            replay.addint("sfr_addr_and_data_not_ready");
            replay.addint("sfr_addr_not_ready");
            replay.addint("sfr_data_not_ready");
            replay.addint("missbuf_full");
            replay.addint("interlocked");
            replay.addint("interlock_overflow");
            replay.addint("fence");
            replay.addint("bank_conflict");
          }
        }
        DataStoreNodeTemplate& forward = load("forward"); {
          forward.summable = 1;
          forward.addint("cache");
          forward.addint("sfr");
          forward.addint("sfr_and_cache");
        }
        DataStoreNodeTemplate& dependency = load("dependency"); {
          dependency.summable = 1;
          dependency.addint("independent");
          dependency.addint("predicted_alias_unresolved");
          dependency.addint("stq_address_match");
          dependency.addint("stq_address_not_ready");
          dependency.addint("fence");
        }
        DataStoreNodeTemplate& type = load("type"); {
          type.summable = 1;
          type.addint("aligned");
          type.addint("unaligned");
          type.addint("internal");
        }
        load.histogram("size", 4, sizeshift_names);
        load.histogram("datatype", DATATYPE_COUNT, datatype_names);
      }
      DataStoreNodeTemplate& store = dcache("store"); {
        DataStoreNodeTemplate& issue = store("issue"); {
          issue.summable = 1;
          issue.addint("complete");
          issue.addint("exception");
          issue.addint("ordering");
          issue.addint("unaligned");
          DataStoreNodeTemplate& replay = issue("replay"); {
            replay.summable = 1;
            replay.addint("sfr_addr_and_data_not_ready");
            replay.addint("sfr_addr_not_ready");
            replay.addint("sfr_data_not_ready");
            replay.addint("sfr_addr_and_data_and_data_to_store_not_ready");
            replay.addint("sfr_addr_and_data_to_store_not_ready");
            replay.addint("sfr_data_and_data_to_store_not_ready");
            replay.addint("interlocked");
            replay.addint("fence");
            replay.addint("parallel_aliasing");
            replay.addint("bank_conflict");
          }
        }
        DataStoreNodeTemplate& forward = store("forward"); {
          forward.summable = 1;
          forward.addint("zero");
          forward.addint("sfr");
        }
        DataStoreNodeTemplate& type = store("type"); {
          type.summable = 1;
          type.addint("aligned");
          type.addint("unaligned");
          type.addint("internal");
        }
        store.histogram("size", 4, sizeshift_names);
        store.histogram("datatype", DATATYPE_COUNT, datatype_names);
      }
      DataStoreNodeTemplate& fence = dcache("fence"); {
        fence.summable = 1;
        fence.addint("lfence");
        fence.addint("sfence");
        fence.addint("mfence");
      }
    }
  }
  DataStoreNodeTemplate OutOfOrderCoreStats("OutOfOrderCoreStats"); {
    OutOfOrderCoreStats.addint("cycles");
    DataStoreNodeTemplate& dispatch = OutOfOrderCoreStats("dispatch"); {
      DataStoreNodeTemplate& source = dispatch("source"); {
        source.summable = 1;
        source.histogram("integer", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("fp", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("st", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("br", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
      }
      dispatch.histogram("nonready_sources", OutOfOrderModel::MAX_OPERANDS+1, 0, OutOfOrderModel::MAX_OPERANDS, 1);
      dispatch.histogram("width", OutOfOrderModel::DISPATCH_WIDTH+1, 0, OutOfOrderModel::DISPATCH_WIDTH, 1);
    }
    DataStoreNodeTemplate& issue = OutOfOrderCoreStats("issue"); {
      DataStoreNodeTemplate& source = issue("source"); {
        source.summable = 1;
        source.histogram("integer", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("fp", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("st", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
        source.histogram("br", OutOfOrderModel::MAX_PHYSREG_STATE, OutOfOrderModel::physreg_state_names);
      }
      DataStoreNodeTemplate& width = issue("width"); {
        width.histogram("all", OutOfOrderModel::MAX_ISSUE_WIDTH+1, 0, OutOfOrderModel::MAX_ISSUE_WIDTH, 1);
        width.histogram("ready", OutOfOrderModel::IQ_SIZE+1, 0, OutOfOrderModel::IQ_SIZE, 1);
      }
      issue.addint("wrong_path_instrs");
    }
    DataStoreNodeTemplate& writeback = OutOfOrderCoreStats("writeback"); {
      DataStoreNodeTemplate& width = writeback("width"); {
        width.histogram("all", OutOfOrderModel::MAX_ISSUE_WIDTH+1, 0, OutOfOrderModel::MAX_ISSUE_WIDTH, 1);
      }
    }
    DataStoreNodeTemplate& commit = OutOfOrderCoreStats("commit"); {
      DataStoreNodeTemplate& freereg = commit("freereg"); {
        freereg.summable = 1;
        freereg.addint("pending");
        freereg.addint("free");
      }
      commit.addint("free_regs_recycled");
      commit.histogram("width", OutOfOrderModel::COMMIT_WIDTH+1, 0, OutOfOrderModel::COMMIT_WIDTH, 1);
    }
    DataStoreNodeTemplate& branchpred = OutOfOrderCoreStats("branchpred"); {
      branchpred.addint("predictions");
      branchpred.addint("updates");
      branchpred.histogram("cond", 2, branchpred_outcome_names);
      branchpred.histogram("indir", 2, branchpred_outcome_names);
      branchpred.histogram("ret", 2, branchpred_outcome_names);
      branchpred.histogram("summary", 2, branchpred_outcome_names);
      DataStoreNodeTemplate& ras = branchpred("ras"); {
        ras.summable = 1;
        ras.addint("pushes");
        ras.addint("overflows");
        ras.addint("pops");
        ras.addint("underflows");
        ras.addint("annuls");
      }
    }
    OutOfOrderCoreStats.add("total", PerContextOutOfOrderCoreStats);
    OutOfOrderCoreStats.add("vcpu0", PerContextOutOfOrderCoreStats);
    OutOfOrderCoreStats.add("vcpu1", PerContextOutOfOrderCoreStats);
    OutOfOrderCoreStats.add("vcpu2", PerContextOutOfOrderCoreStats);
    OutOfOrderCoreStats.add("vcpu3", PerContextOutOfOrderCoreStats);
    DataStoreNodeTemplate& simulator = OutOfOrderCoreStats("simulator"); {
      simulator.addfloat("total_time");
      DataStoreNodeTemplate& cputime = simulator("cputime"); {
        cputime.summable = 1;
        cputime.addfloat("fetch");
        cputime.addfloat("decode");
        cputime.addfloat("rename");
        cputime.addfloat("frontend");
        cputime.addfloat("dispatch");
        cputime.addfloat("issue");
        cputime.addfloat("issueload");
        cputime.addfloat("issuestore");
        cputime.addfloat("complete");
        cputime.addfloat("transfer");
        cputime.addfloat("writeback");
        cputime.addfloat("commit");
      }
    }
  }
  DataStoreNodeTemplate PerContextDataCacheStats("PerContextDataCacheStats"); {
    DataStoreNodeTemplate& load = PerContextDataCacheStats("load"); {
      DataStoreNodeTemplate& hit = load("hit"); {
        hit.summable = 1;
        hit.addint("L1");
        hit.addint("L2");
        hit.addint("L3");
        hit.addint("mem");
      }
      DataStoreNodeTemplate& dtlb = load("dtlb"); {
        dtlb.summable = 1;
        dtlb.addint("hits");
        dtlb.addint("misses");
      }
      DataStoreNodeTemplate& tlbwalk = load("tlbwalk"); {
        tlbwalk.summable = 1;
        tlbwalk.addint("L1_dcache_hit");
        tlbwalk.addint("L1_dcache_miss");
        tlbwalk.addint("no_lfrq_mb");
      }
    }
    DataStoreNodeTemplate& fetch = PerContextDataCacheStats("fetch"); {
      DataStoreNodeTemplate& hit = fetch("hit"); {
        hit.summable = 1;
        hit.addint("L1");
        hit.addint("L2");
        hit.addint("L3");
        hit.addint("mem");
      }
      DataStoreNodeTemplate& itlb = fetch("itlb"); {
        itlb.summable = 1;
        itlb.addint("hits");
        itlb.addint("misses");
      }
      DataStoreNodeTemplate& tlbwalk = fetch("tlbwalk"); {
        tlbwalk.summable = 1;
        tlbwalk.addint("L1_dcache_hit");
        tlbwalk.addint("L1_dcache_miss");
        tlbwalk.addint("no_lfrq_mb");
      }
    }
    DataStoreNodeTemplate& store = PerContextDataCacheStats("store"); {
      store.addint("prefetches");
    }
  }
  DataStoreNodeTemplate DataCacheStats("DataCacheStats"); {
    DataStoreNodeTemplate& load = DataCacheStats("load"); {
      DataStoreNodeTemplate& transfer = load("transfer"); {
        transfer.summable = 1;
        transfer.addint("L2_to_L1_full");
        transfer.addint("L2_to_L1_partial");
        transfer.addint("L2_L1I_full");
      }
    }
    DataStoreNodeTemplate& missbuf = DataCacheStats("missbuf"); {
      missbuf.addint("inserts");
      DataStoreNodeTemplate& deliver = missbuf("deliver"); {
        deliver.summable = 1;
        deliver.addint("mem_to_L3");
        deliver.addint("L3_to_L2");
        deliver.addint("L2_to_L1D");
        deliver.addint("L2_to_L1I");
      }
    }
    DataStoreNodeTemplate& prefetch = DataCacheStats("prefetch"); {
      prefetch.summable = 1;
      prefetch.addint("in_L1");
      prefetch.addint("in_L2");
      prefetch.addint("required");
    }
    DataStoreNodeTemplate& lfrq = DataCacheStats("lfrq"); {
      lfrq.addint("inserts");
      lfrq.addint("wakeups");
      lfrq.addint("annuls");
      lfrq.addint("resets");
      lfrq.addint("total_latency");
      lfrq.addfloat("average_latency");
      lfrq.histogram("width", CacheSubsystem::MAX_WAKEUPS_PER_CYCLE+1, 0, CacheSubsystem::MAX_WAKEUPS_PER_CYCLE+1, 1);
    }
    DataCacheStats.add("total", PerContextDataCacheStats);
    DataCacheStats.add("vcpu0", PerContextDataCacheStats);
    DataCacheStats.add("vcpu1", PerContextDataCacheStats);
    DataCacheStats.add("vcpu2", PerContextDataCacheStats);
    DataCacheStats.add("vcpu3", PerContextDataCacheStats);
    DataCacheStats.add("vcpu4", PerContextDataCacheStats);
    DataCacheStats.add("vcpu5", PerContextDataCacheStats);
    DataCacheStats.add("vcpu6", PerContextDataCacheStats);
    DataCacheStats.add("vcpu7", PerContextDataCacheStats);
    DataCacheStats.add("vcpu8", PerContextDataCacheStats);
    DataCacheStats.add("vcpu9", PerContextDataCacheStats);
    DataCacheStats.add("vcpu10", PerContextDataCacheStats);
    DataCacheStats.add("vcpu11", PerContextDataCacheStats);
    DataCacheStats.add("vcpu12", PerContextDataCacheStats);
    DataCacheStats.add("vcpu13", PerContextDataCacheStats);
    DataCacheStats.add("vcpu14", PerContextDataCacheStats);
    DataCacheStats.add("vcpu15", PerContextDataCacheStats);
    DataCacheStats.add("vcpu16", PerContextDataCacheStats);
    DataCacheStats.add("vcpu17", PerContextDataCacheStats);
    DataCacheStats.add("vcpu18", PerContextDataCacheStats);
    DataCacheStats.add("vcpu19", PerContextDataCacheStats);
    DataCacheStats.add("vcpu20", PerContextDataCacheStats);
    DataCacheStats.add("vcpu21", PerContextDataCacheStats);
    DataCacheStats.add("vcpu22", PerContextDataCacheStats);
    DataCacheStats.add("vcpu23", PerContextDataCacheStats);
    DataCacheStats.add("vcpu24", PerContextDataCacheStats);
    DataCacheStats.add("vcpu25", PerContextDataCacheStats);
    DataCacheStats.add("vcpu26", PerContextDataCacheStats);
    DataCacheStats.add("vcpu27", PerContextDataCacheStats);
    DataCacheStats.add("vcpu28", PerContextDataCacheStats);
    DataCacheStats.add("vcpu29", PerContextDataCacheStats);
    DataCacheStats.add("vcpu30", PerContextDataCacheStats);
    DataCacheStats.add("vcpu31", PerContextDataCacheStats);
  }
  DataStoreNodeTemplate EventsInMode("EventsInMode"); {
    EventsInMode.summable = 1;
    EventsInMode.addint("user64");
    EventsInMode.addint("user32");
    EventsInMode.addint("kernel64");
    EventsInMode.addint("kernel32");
    EventsInMode.addint("legacy16");
    EventsInMode.addint("microcode");
    EventsInMode.addint("idle");
  }
  DataStoreNodeTemplate PTLsimStats("PTLsimStats"); {
    PTLsimStats.addint("snapshot_uuid");
    PTLsimStats.addstring("snapshot_name", 64);
    DataStoreNodeTemplate& summary = PTLsimStats("summary"); {
      summary.addint("cycles");
      summary.addint("insns");
      summary.addint("uops");
      summary.addint("basicblocks");
    }
    DataStoreNodeTemplate& simulator = PTLsimStats("simulator"); {
      DataStoreNodeTemplate& version = simulator("version"); {
        version.addstring("build_timestamp", 32);
        version.addint("svn_revision");
        version.addstring("svn_timestamp", 32);
        version.addstring("build_hostname", 64);
        version.addstring("build_compiler", 16);
      }
      DataStoreNodeTemplate& run = simulator("run"); {
        run.addint("timestamp");
        run.addstring("hostname", 64);
        run.addstring("kernel_version", 32);
        run.addstring("executable", 128);
        run.addstring("args", 256);
        run.addint("native_cpuid");
        run.addint("native_hz");
      }
      DataStoreNodeTemplate& config = simulator("config"); {
        config.addstring("config", 256);
      }
      DataStoreNodeTemplate& performance = simulator("performance"); {
        DataStoreNodeTemplate& rate = performance("rate"); {
          rate.addfloat("cycles_per_sec");
          rate.addfloat("issues_per_sec");
          rate.addfloat("user_commits_per_sec");
        }
      }
    }
    DataStoreNodeTemplate& decoder = PTLsimStats("decoder"); {
      DataStoreNodeTemplate& throughput = decoder("throughput"); {
        throughput.addint("basic_blocks");
        throughput.addint("x86_insns");
        throughput.addint("uops");
        throughput.addint("bytes");
      }
      decoder.histogram("x86_decode_type", DECODE_TYPE_COUNT, decode_type_names);
      DataStoreNodeTemplate& bb_decode_type = decoder("bb_decode_type"); {
        bb_decode_type.summable = 1;
        bb_decode_type.addint("all_insns_fast");
        bb_decode_type.addint("some_complex_insns");
      }
      DataStoreNodeTemplate& page_crossings = decoder("page_crossings"); {
        page_crossings.summable = 1;
        page_crossings.addint("within_page");
        page_crossings.addint("crosses_page");
      }
      DataStoreNodeTemplate& bbcache = decoder("bbcache"); {
        bbcache.addint("count");
        bbcache.addint("inserts");
        bbcache.histogram("invalidates", INVALIDATE_REASON_COUNT, invalidate_reason_names);
      }
      DataStoreNodeTemplate& pagecache = decoder("pagecache"); {
        pagecache.addint("count");
        pagecache.addint("inserts");
        pagecache.histogram("invalidates", INVALIDATE_REASON_COUNT, invalidate_reason_names);
      }
      decoder.addint("reclaim_rounds");
    }
    PTLsimStats.add("ooocore", OutOfOrderCoreStats);
    PTLsimStats.add("dcache", DataCacheStats);
    DataStoreNodeTemplate& external = PTLsimStats("external"); {
      external.histogram("assists", ASSIST_COUNT, assist_names);
      external.histogram("traps", 256, x86_exception_names);
    }
  }

  odstream os(cout.filehandle());
  os << PTLsimStats;
  os.close();
}
