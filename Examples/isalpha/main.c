#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i=0;

    while(i<128) //128 yaziyorum cunku ascii kodlar 127 ye kadar.
    {
        if(isalpha(i)) printf("Harftir.\n");  // buyuk harfler ve kucuk harfler icin ayri ayri yazdi. 26 sar defa harftir diye.

        else printf("Harf degildir.\n");

        i++;
    }

    if(isalpha('5')) printf("if calisti girilen karakter harftir.");


// bu tur kontrol etme fonksiyonlarina verdigimiz parametreler tek tirnak icinde olmalidir. Veya tam sayi vermissek de o ascii koddaki karaktere bakilir.


    return 0;
}
