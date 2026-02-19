#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya=fopen("C:\\Users\\Kutay\\Desktop\\c bilgi.txt","r");
    char ch;

    while(1==fscanf(dosya,"%c",&ch))   //fscanf bosluga kadar okur sozu %c icin gecerli degildir.Cunku %c ile bosluk \n gibi karakterleri de okuyabiliriz.
    {                              // fscanf basarili okuma sayisini dondurur. Dosya sonuna geldiginde EOF dondurup while dan cikmasi gerekir.
        putchar(ch);               // while in kosulunu  (fscanf(dosya,"%c",&ch)!=EOF) yapsakta sorunsuz calisir.
    }

    return 0;
}
