#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("bir sayi girin.");
    long int x,i=0;
    scanf("%d",&x);

    for(;x%10==0;x/10)
    {
       // if(x%10==0)
        //{

           i++;
        //}


    }
    printf("sayinin %d. biti 1dir",i)






    /*for(;x>0;x/10)
    {
        if(x%10==0)
        i++;

    }
    if(x%10==1) printf("sayinin 0. biti 1dir.");
    if(i!=0)printf("sayinin sagdan sifir olmayan ilk biti %d",i);*/
    return 0;
}
