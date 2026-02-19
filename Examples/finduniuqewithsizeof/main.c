#include <stdio.h>
#include <stdlib.h>

void findunique(char dizi[],int len);

int main()
{

printf("Bir dizi giriniz: ");
int x;
char arr[100]; // burda dizinin eleman sayisini baslangicta x olarak tanimlamadim cunku dizinin elemanlarini sonradan aliyoruz. Degisken uzunluklu
                 // diziler sadece bazi derleyiciler tarafindan destekleniyormus. Not: x olarak tanimlasam da yine hata vermeden calisiyordu.
scanf("%s",arr);

//x=sizeof(arr)/sizeof(arr[0]);  //Kod calismiyor cunku sizeoff ile dizinin uzunlugunu bulabilmem icin dizinin
                                // elemanlarinin baslangicta tanimlanmasi gerekiyormus.cunku size of derleme zamanında bir dizinin boyutunu belirler.ancak
                                // kullanicidan alinan dizinin boyutu calisma sirasinda degisebilir.
                                //onun yerine dizinin uzunlugunu strlen fonksiyonu ile bulabiliriz.
 x=strlen(arr);

findunique(arr,x);


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
    printf("Essiz elemanlar: ");
    for(k=0;k<=len-1;k++)
    {
        if((k==0||dizi[k]!=dizi[k-1])&&(k==len-1||dizi[k]!=dizi[k+1]))
        {
            printf(" %c",dizi[k]);
        }
    }
}
