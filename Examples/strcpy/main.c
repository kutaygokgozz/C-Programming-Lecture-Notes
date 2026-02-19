#include <stdio.h>
#include <stdlib.h>


char* mystrcpy(char* dest,char* src);

int main()
{
    char kaynak[50]="kutay";
    char hedef[50];
    // hedef=kaynak; bu sekilde atama yapmak mumkun degildir cunku hedef == &hedef[0] dir ve kaynakta &kaynak[0]dir. iki adresi bibirine atayamassin.
    int i;
    for(i=0;i<6;i++)
    {
        hedef[i]=kaynak[i]; // bu sekilde tek tek atama yapabiliriz. veya strcpy kullanabiliriz. (for u 6 ya kadar dondurdum cunku null da atansin istedim.)
    }

    printf("%s\n",hedef);
    // Simdi kendi strcpy fonksiyonumuzu olusturalim.
    mystrcpy(hedef,"mustafa");
    printf("%s\n",hedef);
    char soyad[50];
    printf("%s",mystrcpy(soyad,"gokgoz"));


    return 0;
}
char* mystrcpy(char* dest,char* src)  //bir adres donduren fonksiyon olarak tanimladik. fonksiyon cagirildiginda
{                                      //hedef dizisinin ilk adresini dondurmus olacak.

    char* original=dest;
    while(*src!=NULL)
    {
        *dest=*src;
        dest++;
        src++;
    }
return original;
}
