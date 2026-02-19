#include <stdio.h>
#include <stdlib.h>



/* Burada onemli bir nokta var ben name dizisini ve int degiskenini ilk basta main fonksiyon icinde tanimlamistim ama bu degiskenleri
yeni bir fonksiyon icinde kullandigim icin derleyici hata verdi. Ancak i degiskenini yine de main icinde tanimlayabilirdim cunku revname
icinde int i diye parametre alacagini soylemistim, ama diziyi yani name i global scope icinde tanimlamamiz gerek ya da fonksiyonun icinde tanimlamam
gerek cunku hem main fonksiyon icinde hem de kendi olusturdugumuz fonksiyon icinde kullaniyoruz.

Not: Burda name dizisini kendi olusturdugumuz
fonksiyon icinde tanimlasak derleyici yine hata verir cunku main fonksiyonda da kullaniyoruz en iyisi global olarak tanimlamak.

Bir not daha: int i diye parametre alacak seklinde tanimladik ama main icinde veya fonksiyon icinde illa i kullanmamiz gerekmiyor main de int x
tanimlayip onu da parametre olarak gonderebilirsin.*/
int revname(int i);

char name[100];

int main()
{int x;


    printf("Ters cevirilecek olan diziyi giriniz.");

    scanf("%s",name);
    for(x=0;name[x]!=0;x++){}
    revname(x);

    return 0;
}
revname(int x)
{for(;x>=0;x--)
    printf("%c",name[x]);
}
