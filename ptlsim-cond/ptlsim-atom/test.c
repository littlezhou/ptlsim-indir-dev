#include <stdio.h>

int main()
{

  long long unsigned  val = 0xFFFFFFFe;
  long long   vv = (long long) (int)val;
  printf("vv: %lld\n",vv);
  int var[128];
  for(int i=0;i<128;++i) { var[i] = i; }
  int evens=0;
  int odds=0;
  for(int i=0;i<128;++i)
  {
     if(var[i] & 0x1)
     { 
        ++odds;
     }
     else
     {
	++evens;
     } 
  }
  printf("odds: %d, evens: %d\n",odds,evens);
  return 0;
}
