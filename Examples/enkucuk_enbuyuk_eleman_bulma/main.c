#include <stdio.h>
#include <stdlib.h>


void big_sm_num(int arr[],int len);


int main()
{
    int x,i=0;
    printf("Kac boyutlu dizi gireceksiniz:");
    scanf("%d",&x);
    int arr[x];
    while(i<=x-1)
    {
     printf("Dizinin %d. elemanini girin.",i+1);
     scanf("%d",&arr[i]);

    i ++;
    }
    big_sm_num(arr,x); //bir fonksiyona parametre gönderirken illa degiskeni yazmak zorunda degilsin
                          // bu sekilde direkt deger de yazabilirsin. Burda normalde x yazmamýz gerekiyor.


    return 0;
}
void big_sm_num(int arr[],int len)

          {

             int x,i,res; //bu x ve i ler main fonksiyondakinden farkli x ve i ler. Cunku local variable lar.

             for(i=0;i<=len-1;i++)
                   {
                       for(x=0;x<=len-1;x++)
                           {
                               if(arr[i]<arr[x])
                               {
                                   res=arr[i];
                                   arr[i]=arr[x];
                                   arr[x]=res;
                               }
                           }


                   }
                    printf("Dizinin en buyuk elemani: %d\nDizinin en kucuk elemani: %d",arr[len-1],arr[0]);
                   }
