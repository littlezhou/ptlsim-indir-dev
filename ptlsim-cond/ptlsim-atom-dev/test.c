#include <stdio.h>

int main()
{
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
