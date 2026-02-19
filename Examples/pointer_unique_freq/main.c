#include <stdio.h>
#include <stdlib.h>
void showunique(char *ptr1,int len,char *ptr2);
int main()
{
    printf("Bir dizi giriniz: ");
    char arr[100];
    char goal[256];   // bu dizinin uzunlugunu da baslangicta 100 yapmistim tam sayilar icin calisti ama harfler icin calismadi cunku harflerin ascii kodlari
                        // 100 u geciyor.
    scanf("%s",&arr[0]); // farklilik olsun, hatirlayalim diye boyle yaptim.
    int x=strlen(arr);
    showunique(arr,x,goal);
    printf("%s",goal);





    return 0;
}

void showunique(char *ptr1,int len,char *ptr2)
{
    int freq[256]={0}; // bu sekilde ilk elemanina herhangi bir deger atayip digerlerini bos biraktigimizda onlara otomatik olarak sifir atanir
    int i,j;
    for(i=0;i<len;i++)
    {

        freq[ptr1[i]]++;  // su an mesela dizinin ilk elemani a olsun a nin ascii codu numarali index 0 dan 1 olacak. 3. elemani da a ise bu sefer o
                            // index 2 olmus olur.
    }                        // Yani biz burda freq dizisinin index numaralarina arr dizisinin elemanlarini yazmis oluyoruz.
                            //Koydugmuz karakterlerin ascii kodu index numarasi olarak kullaniliyor.
    for(i=0,j=0;i<len;i++)  // Hatirla: bir dizinin index numarasini 'a'gibi bir karakterlede belirtebiliyodun. not: tek tirnak icinde yazman lazim.
                               // yoksa kabul etmez.bu sekilde direkt dizi olarak yazmiyosan eger.
    {
        if(freq[ptr1[i]]==1)
        {
            ptr2[j]=ptr1[i];
        j++;
        }

    }
    ptr2[j]='\0';
}
