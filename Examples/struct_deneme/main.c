#include <stdio.h>
#include <stdlib.h>


typedef struct //typedef kullanirsan struct a isim vermek zorunda degilsin. Versende olur.
   {
     int kol;
     int omuz;
     char arr[50];


   }kutay;

struct person
{
    char arr[50];// farkli struct lar icinde ayni isimli degiskenler kullanabiliriz.
    int boy;
}p2; // burda global olarak p2 degiskeni tanimlamis olduk. struct person veri tipinde.



int main()
{
    int boy=50;
    kutay kisi1;
    kisi1.kol=55;
    struct person p1={"ahmet",180}; // burdaki tanimladigimiz p1 degiskeni ise main icinde oldugu icin local variable dir.

printf("%d\n",kisi1.kol);
printf("%s %d\n",p1.arr,p1.boy);
printf("%d\n",boy);


    return 0;
}
