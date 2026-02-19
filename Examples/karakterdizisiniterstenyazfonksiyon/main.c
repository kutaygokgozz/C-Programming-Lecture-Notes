#include <stdio.h>
#include <stdlib.h>

//Bir fonksiyonun bir deger dondurmemesi demek parametre almayacagi anlamina gelmez!
// bir fonksiyona dizi parametresi nasil gonderilir
// bir fonksiyon icinde bir degisken kullanacaksan o degiskeni ya parametre olarak gondermelisin ya da fonksiyonun icinde tanimlamalisin.!!!
// Bir fonksiyonu tanimlarken alacagi parametreyi girdiginde ornegin void mystrlen(char name[]) seklinde. Sen bu fonksiyon icinde name degiskenini
  //kullanicam, kullanabilirim demis oluyosun. Cunku biz o fonksiyona baska bir yerde parametre gondericez mesela mainde. o da onu kullanip islem
    // yapacak
int mystrlen(char name[]);
void revname(char name[]);


int main()
{

    char name[100];
    printf("Bir isim giriniz.");
    scanf("%s",name);
    revname(name);

    return 0;
}


int mystrlen(char name[])
{int i;
    while(name[i]!=NULL)
    {
        i++;

    }
   return i;   //Burda yine onemli bir nokta var: Return u while in icine koyarsan kod hatali olur, ilk basta oyle yapmistim.
                //koyman gereken yer fonksiyonun sonu (while in disinda)

}

void revname(char name[])
 {
   int x= mystrlen(name); //burda mystrlen(char name[]) seklinde yazmistim hata aliyodum cunku burda fonksiyonu tanimlamiyorum kullaniyorum.

    for(x=x-1;x>=0;x--)
    {
        printf("%c",name[x]);
    }
 }
