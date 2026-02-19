#include <stdio.h>
#include <stdlib.h>

int main()
{
    // binary to hexadecimal
    // kullanicidan 4 adet 8 bitlik binary sayi al. hexarr diye bir string dizisi olustur. bu diziye hexa degerleri ata. ve ekrana yazdir.
    // bitwise kullanamazsin. 4 variable. only one complex for.


    printf("4 adet 8 bitlik binary sayi giriniz:\n");
    unsigned char hexarr[4][3];
   unsigned char binarr[4][9];

    int i;
    for(i=0;i<4;i++)
    {
        scanf("%s",binarr[i]);
    }

    for(i=0;i<4;i++)
    {
        sprintf(hexarr[i],"%x",strtol(binarr[i],NULL,2));   // sprintf diziye formatlanmis bir string yazar. ekrana hexa sayilari yazdirirken %x degil
        printf("%s ",hexarr[i]);                              // %s kullanmaliyiz.
    }




    return 0;
}
