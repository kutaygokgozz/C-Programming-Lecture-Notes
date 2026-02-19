#include <stdio.h>
#include <stdlib.h>
void diamond(int x);
int main()
{
    printf("Bir sayi giriniz: ");
   int a;
   scanf("%d",&a);
   diamond(a);
    return 0;
}
/*       *
        ***
       *****    bu sekil icin a=x=4 girilmis kabul ediyoruz.
      *******
       *****
        ***
         *
*/
void diamond(int x)
{
    int k,n;
    for(k=1;k<=x;k++)
    {
        for(n=1;n<=x-k;n++)
        {
            printf(" ");
        }

        for(n=1;n<=2*k-1;n++) //tek sayilar seklinde gittigi icin 2*k -1 dedik.
        {
            printf("*");
        }

        for(n=1;n<=x-k;n++)
        {
            printf(" ");
        }
printf("\n");
    }

    for(k=x-1;k>=1;k--)
    {
         for(n=1;n<=x-k;n++)
         {
             printf(" ");
         }
         for(n=1;n<=2*k-1;n++)  //2*k -1 detayi onemli !!!
         {
             printf("*");
         }
         for(n=1;n<=x-k;n++)
         {
            printf(" ");
         }

    printf("\n");


    }


}
