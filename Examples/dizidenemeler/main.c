#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100];
    printf("%d\n",arr[0]);       // Burda herhangi bir deger atamasi yapmadigim icin yazdirdigimda o anda bellekte ne varsa onu ekrana yaziyor.
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);


    int dizi[100]={0};
    printf("\n\n");              // ilk elemani tanimladiktan sonra bos birakilan elemanlara otomatik olarak sifir degeri atanir.
    printf("%d\n",dizi[0]);
    printf("%d\n",dizi[1]);
    printf("%d\n",dizi[2]);


    int arr1[100]={1};
    printf("\n%d",arr1[0]);      // ilk elemani sifir olarak tanimlamak zorunda degilsin 1 olarak tanimlayip digerlerini bos birakirsan
    printf("\n%d",arr1[1]);        // yine digerlerine otomatik olarak sifir degeri atanir.
    printf("\n%d",arr1[2]);


    int arr2[256]={0};
    printf("\n\n%d",arr2['k']);    // dizinin indexini tam sayi yerine bir charla belirttim. onun ascii kodu ile calisacak. tirnak icinde
                                     // yazmassan kabul etmez. Char degil string yazarsan (yani cift tirnak icinde) kabul etmez. !!!


    int arr3[100];  //  olarak tanimladim
    arr3[64]=999;
    printf("\n\n%d",arr3['@']);  // @ karakterinin ascii kodu 64 oldugu icin 999 basti.
    printf("\n%d",arr3[64]);    //64. uncu eleman olan 999 u basti.
    printf("\n%d",arr3[63]);  //bostaki eleman olarak sifiri basti.




    return 0;
}
