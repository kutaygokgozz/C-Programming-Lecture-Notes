#include <stdio.h>
#include <stdlib.h>

void findunique(int dizi[],int len);
int main()
{
    printf("Kac elemanli dizi gireceksiniz: ");
    int x,i;
    scanf("%d",&x);
    int arr[x];
    for(i=0;i<=x-1;i++)
    { printf("%d. elemani girin. ",i+1);
        scanf("%d",&arr[i]);}

       findunique(arr,x);


    return 0;
}

void findunique(int dizi[],int len)
    {
     int n,k,res;
     for(n=0;n<=len-1;n++)
     {
         for(k=0;k<=len-1;k++)
          {

            if(dizi[n]<dizi[k])
               {
            res=dizi[n];
            dizi[n]=dizi[k],
            dizi[k]=res;
                }

         }
       }
       printf("Dizideki essiz elemanlar: ");

    for(k=0;k<=len-1;k++)
          {
           if((k==0||dizi[k]!=dizi[k-1])&&(k==len-1||dizi[k]!=dizi[k+1]))
           {
               printf(" %d",dizi[k]);
           }

          }


     }









