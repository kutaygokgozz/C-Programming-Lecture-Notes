#include <stdio.h>
#include <stdlib.h>
void revnumber(int *a,int len);
int main()
{

    int arr[]={1,2,3};
    char arr1[3]={'m','e','r'};                //sen bir karakter dizisini tanimlarken elemanlarini atarsan geriye kalanlar otomatik olarak null yapilir.
    char arr2[]={"selam"};                    // integer dizisinde de geriye kalanlar otomatik olarak sifir yapilir. bknz: dizidenemeler.
    printf("%d",arr[-1]);                     // null karakteri integer olarak bastirmak istersen ekrana sifir yazar.
    printf("\n%c",arr2[4]); // m basar.       // herhangi bir karakteri (char i) integer olarak bastirmak istersen ekrana onun ascii kodunu yazar.
    printf("\n%d",arr1[5]);       // bir integer karakteri char olarak veya string olarak ekrana bastiramazsin. yani %c veya %s kullanarak bastiramazsin.
    int x=3;
    revnumber(arr,x);
   //printf("%s",arr); bu sekilde bir tam sayi dizisini yazdiramassin %s char veri tipi basabilir.
    //bir tam sayi dizisinin tum elemanlarini ekrana basmak istiyorsan dongu kullanman kacinilmazdir.
    printf("\n%s",arr1); //bu satir su demek: null gorene kadar ekrana bas.
    for(int i=0;i<x;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
void revnumber(int *a,int len)
{
    int i,res;
    for(i=0;i<len/2;i++)
    {
        res=a[i];
        a[i]=a[len-1-i];
        a[len-1-i]=res;
    }
}
