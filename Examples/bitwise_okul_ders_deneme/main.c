#include <stdio.h>
#include <stdlib.h>

int main()
{



    //unsigned long nx=-0xB3;
    //printf("%d\n",nx);
//printf("%d",sizeof(int)); // long int ile int neden ikiside 4 byte



      int res=0;
      char *end, *str="12dec0101";
      long n=strtol(str,&end,8);
      while(n>0)
      {
          res<<=1;
          if(n&1==1)res=res^1;

          n>>=1;
      }
      unsigned char mask=0x0008;
      while(mask)
      {
          putchar(res&mask?'1':'0');mask>>=1;
      }

    return 0;
}
