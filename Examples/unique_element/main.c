#include <stdio.h>
#include <stdlib.h>
void findunique(char dizi[],int len);
int main()
{
    printf("Bir dizi giriniz: ");
    char arr[100];
    int x;
    scanf("%s",arr);
    x=strlen(arr);
    findunique(arr,x);
    return 0;
}

void findunique(char dizi[],int len)
{
    int freq[256]={0};  // Bu sekildeki bir tanimlama ile dizinin ilk elemanini belirleyip diger elemanlari bos birakirsak digerlerinin
    int k;               // degerlerine otomatik olarak 0 atanir. Not: burda ilk elemani 0 yaptik diye digerleri 0 olmadi.Bos biraktik diye
    for(k=0;k<=len-1;k++)   // 0 oldu yani ilk elemani 1 yapsak digerlerini bos biraksakta yine digerlerine 0 atanacakti.
    {
        freq[dizi[k]]++;  // elemanlarin tekrar sayilarini sayan satir.

    }

    for(k=0;k<=len-1;k++)
    {
        if(freq[dizi[k]]==1)
        { printf("%c",dizi[k]); }

    }


}
