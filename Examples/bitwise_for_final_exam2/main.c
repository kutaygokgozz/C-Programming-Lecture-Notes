#include <stdio.h>
#include <stdlib.h>

int main()
{

    //8 bit binary sayiyi decimale ceviren kod. iki farkli sekilde.

    char arr[9];
    printf("8 bit binary sayi giriniz.");
    scanf("%s",arr);
    printf("%d",strtol(arr,NULL,2));




    /*unsigned int bin,pw=1,dec=0;
    scanf("%d",&bin);
    while(bin>0)
    {
        dec=dec+(bin%10)*pw;
        pw*=2;
        bin/=10;
    }
    printf("%d",dec);
    */



    return 0;
}
