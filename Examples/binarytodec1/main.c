#include <stdio.h>
#include <stdlib.h>

void bintodec(long int *p);
int main()
{
    printf("Enter a binary number: ");
    long int binnum; //unsigned char tanimlamistim olmuyodu cunku unsigned char maksimum 255 e kadar tutabilir.
    scanf("%ld",&binnum);  //%d ile de alabilir miydim
    bintodec(&binnum);
    printf("\nDecimal number: %ld",binnum);
        return 0;
}

void bintodec(long int *p)
      {

      int pw=1,decnum=0;//decnum a basta sifir vermen lazim yoksa yanlis calisabilir.

      for(;(*p)>0;(*p)/=10, pw=pw*2)
        {decnum=(decnum+((*p)%10)*pw);}

        (*p)=decnum;

      }




