#include <stdio.h>
#include <stdlib.h>

void compare(int arr[],int sayi);

int main()
{
    printf("Kac elemanli dizi gireceksiniz: ");
    int x,k=0;
   scanf("%d",&x);
    int arr[x];
    while (k<=x-1){
                   printf("Dizinin %d. elemanini girin. ",k+1);
                   scanf("%d",&arr[k]); k++;

                  }


    compare(arr,x);
    int m;
     for( m=0;m<=x-1;m++){printf("%d",arr[m]);}


    return 0;
}


void compare (int arr[],int sayi)
     {int i,n,res;
         for(i=0;i<=sayi-1;i++)
         {
             for(n=0;n<=sayi-1;n++)  //burda if kullanmayip ikinci forun icinde kiyaslama yapmistim hatali cikti veriyodu.
                {if(arr[i]<arr[n]){
                  res=arr[i];
                  arr[i]=arr[n];
                  arr[n]=res;}
                }
         }


     }
