#include <stdio.h>
#include <stdlib.h>

void findunique(char dizi[],int len);

int main()
{
    printf("Bir dizi girinizz: ");
    int x;
    char arr[x]; // x in degeri belli degilken diziyi tanimlamis olduk.
    scanf("%s",arr);

    for(x=0;arr[x]!='\0';x++){}

    findunique(arr,x);
    return 0;
}

void findunique(char dizi[],int len)

         {
           int k,n,res;
           for(k=0;k<=len-1;k++)
           {
               for(n=0;n<=len-1;n++)
               {
                   if(dizi[k]<dizi[n])
                   {
                     res=dizi[k];
                     dizi[k]=dizi[n];
                     dizi[n]=res;
                   }
               }
           }

         printf("Alfabetik siralama: ");
             for(k=0;k<=len-1;k++)

                 {
                   printf(" %c",dizi[k]);
                 }

         printf("\nTekrarlamayan elemanlar: ");

            for(k=0;k<=len-1;k++)
                {
                  if((k==0||dizi[k]!=dizi[k-1])&&(k==len-1||dizi[k]!=dizi[k+1]))
                  {
                   printf(" %c",dizi[k]);
                  }

                }

         }



