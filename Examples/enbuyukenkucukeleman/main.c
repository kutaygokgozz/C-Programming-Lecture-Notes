#include <stdio.h>
#include <stdlib.h>
void smbgnum(int dizi[],int len);
int main()
{
    printf("Kac elemanli dizi gireceksiniz: ");
    int k,n;
    scanf("%d",&n);
    int arr[n];
    for(k=0;k<=n-1;k++) // Bu satir asiri onemli bir satir. For un icini dogru yazmassan kod yanlis calisir.
    {
        scanf("%d",&arr[k]);
    }

    smbgnum(arr,n);
    return 0;
}

void smbgnum(int dizi[],int len)
{
    int a=0,max,min;
    max=min=dizi[0];

    for(a=1;a<=len-1;a++)
    {
      if(dizi[a]<min)
        {
            min=dizi[a];
        }


        if(dizi[a]>max)
        {
            max=dizi[a];
        }



    }
    printf("En buyuk sayi: %d\nEn kucuk sayi: %d",max,min);
}
