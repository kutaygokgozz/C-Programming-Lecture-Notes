#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void* Mymemcpy(void* dest,void* src,int a);
int main()
{
    int arr[10]={23,25,27};
    int dizi[50];
    Mymemcpy(dizi,arr,12);
    printf("%d",dizi[0]);



    return 0;
}
void* Mymemcpy(void* dest,void* src,int a)
{
  int i;
 char *d=dest;
 char *s=src;
        //Burada type cast yapmak zorundayiz cunku tur void* oldugunda aritmetik islemler yapamayiz.Derleyici ne kadar
      // ilerleyecegini bilmez. Biz char* a cast ederek birer byte ilerlemesi gerektigini soyluyoruz.

  for(i=0;i<a;i++)
  {
   *(d+i)= *(s+i);

  }
}
