#include <stdio.h>
#include <stdlib.h>

int main()
{
    //bitwise_for_final_exam ile ayni soru sadece cozum farkli.
    int dec;
    scanf("%d",&dec);
    unsigned char mask=128; //mask=0x80 da yazabilirdik daha havali :) hoca oyle yapiyo...
    while(mask)
    {
        putchar((dec&mask)?'1':'0');
        mask>>=1;
    }


    return 0;
}
