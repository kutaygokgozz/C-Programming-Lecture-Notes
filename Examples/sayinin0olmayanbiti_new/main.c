#include <stdio.h>
#include <stdlib.h>
int bitcontrol(int dec);
int main()
{
    printf("Decimal sayi giriniz: ");

    int dec;
    scanf("%d",&dec);

    printf("sayinin sondan %d. biti 1dir.",bitcontrol(dec));


    return 0;
}
int bitcontrol(dec)
{
    int i;

    for(i=0;(dec&1)!=1;i++)
        {

         dec>>=1;

        }
       return i;

}
