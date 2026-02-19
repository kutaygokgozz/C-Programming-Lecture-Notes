#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,k;
    printf("Dizinin eleman sayisini giriniz.");
     scanf("%d",&x);
    int arr[x];
    int dizi[x];
    for(k=0;k<=x-1;k++)
    {printf("Dizinin %d. elemaninini girin.",k+1);
        scanf("%d",&arr[k]);
    }
    dizi[0]=arr[x-1];
    for(k=0;k<=x-2;k++){
    dizi[k+1] = arr[k];}

    for(k=0;k<=x-1;k++){
                       printf("%d",dizi[k]);
                       }
    return 0;
}
