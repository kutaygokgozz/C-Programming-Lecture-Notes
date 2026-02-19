#include <stdio.h>
#include <stdlib.h>


// pointerlar bir adres gosterir ve bu adresteki degeri yazmak icin * kullanilir.



int main()
{

   /*
    int x=5;         // pointer tanimlarken * kullanmak zorundasin. * o degiskenin bir pointer oldguunu belirtir.
    int *p=&x;
     *p=7;             // *p : p nin gosterdigi adresteki deger
    printf("%d",*p);   //  p : adresin kendisi
                       // &x : x in adresi
                       // Ekranda 7 yazar
   */


//--------------------------------------------------------------------------------------------------------------------------------

   /*
      int x=5;
      int y=10;
      int *p=&x;   // p diye bir pointer tanimlamis olduk. *p=&x demek x adresindeki deger demek  p ise x in adresi oldu.

   */

//---------------------------------------------------------------------------------------------------------------------------------

   /*
      int x=5;
      int *p=8;
      printf("%d",*p);  // bu sekilde bir sey yazmiyo once pointera bir adres ataman lazim.
   */




//---------------------------------------------------------------------------------------------------------------------------------

   /*
     int x=5;
     int *p=&x;
     *p=12;
     printf("%d",*p); // birinci ornekle ayni oldu 12 yazar.
     printf("\n%p",p); // x in adresini yazar. Cunku p pointer i x in adresini sakliyor.

   */


//----------------------------------------------------------------------------------------------------------------------------------


 // Onemli not: Bir pointer tanimlarken *kullanmak zorundasin.

 //  * tanimda: bu bir pointerdir demek icin kullanilir.
 //  * kullanimda: gosterdigi adresin degerini al demek icin kullanilir.



 // Baska onemli bir not
 // int *p1,p2; tanimlamasinda sadece p1 pointerdir.  * sadece p1 e uygulanir. p2 normal bir int degiskendir.
 // eger p2 yi de pointer olarak tanimlamak istiyorsan su sekilde tanimlama yapmalisin: int *p1,*p2;





//----------------------------------------------------------------------------------------------------------------------------------


  /*

      int arr[]={1,2,3,4,5};
      int *p=arr;

      printf("%d\n",*(p+2));

                      // bu kod 3 yazdirir cunku *p dizinin birinci elemanini yazdirir. *(p+0) da birinci elemani yazdirmis oluyor.
                      // *(p+1) 2 yazdirir cunku dizinin ikinci elemanina tekabul ediyor.
                           // *(p+2) 3 yazdirir cunku dizinin ucuncu elemanina tekabul ediyor.
                           // yani + dan sonraki sayiyi index numarasi olarak dusun.
  */

//----------------------------------------------------------------------------------------------------------------------------------


   /*
        int x;
        int *p=&x;  //not: pointer i tanimlarken adresi tutulacak degiskenin daha once tanimlanmis olmasi gerekli.
        x=5;
        *p=7;
        printf("%d",x);
   */


//----------------------------------------------------------------------------------------------------------------------------------


    /*

       int x,y;
       x=5,y=8;
       int *ptr=&x;
       printf("%d",*ptr); // 5 yazar cunku ptr su anda x i gosteriyor.
       ptr=&y;            // burda ptr nin gosterdigi adresi degistirdik.
       printf("\n%d",*ptr);  // su an 8 yazar cunku ptr artik y yi gosteriyor.


    */


//----------------------------------------------------------------------------------------------------------------------------------

   /*
       int *ptr;    // illa tanimlarken bi adres gostersin demek zorunda degiliz.
       int x=5;
       ptr=&x;      //Bu sekilde gosterecegi adresi sonradan da atayabiliriz.
       printf("%d",*ptr);

   */


//----------------------------------------------------------------------------------------------------------------------------------

    /*
       int x=5;
       int *ptr1;
       *ptr1=&x;              // bu sekilde ptr pointeri x i gostersin diyemezsin sadece ilk basta tanimlarken * ve & bir arada kullaniliyor. Sonraki
       printf("%d",*ptr1);   // satirlarda * isareti pointer in gosterdigi adresteki degerle ilgilenir.
                            // eger sonraki satirlarda gosterdigi adresi degistirmek istersen * kullanmadan direkt su sekilde degistirmen gerekir
                           // ptr1=&x;
    */


//----------------------------------------------------------------------------------------------------------------------------------

     /*
         int x=5;
         int *ptr1,*ptr2;
         ptr1=&x;
         ptr2=ptr1;              // ilk basta ptr1 x i gostersin demistim sonra ptr2 ye ptr1 i atadim.
         printf("%d",*ptr2);     // yani artik ptr2 de x i gostermis oldu.
                                 // ekranda 5 yazar.

     */












    return 0;
}
