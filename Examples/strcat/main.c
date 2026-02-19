#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mystrcat(char* dest,const char* src);


int main()
{
   char a[10] = "merhaba ";   // kismi baslatma. kalan elemanlar otomatik sifirlandi.
   char b[] = "there!";


   mystrcat(a, b);
   printf("%s",a);


    return 0;
}

char* mystrcat(char* dest,const char* src)
{
    char* ret=dest; // destin basini dondurecegiz.

    while(*dest) dest++;  // bu kisimlarin aciklamalari defterde mevcut.

    while(*dest++ = *src++);

        return ret;

}
