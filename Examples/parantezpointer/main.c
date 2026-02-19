#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[]={"selam"};
    char (*p)[]=&arr;  // dizinin tamamini isaret eden pointer. Yani dizinin tamaminin adresini sakliyor. turu char (*)[] dir.

    printf("%s\n",&arr); // yine ekrana selam yazar ancak arr vermen asil dogru olan cunku &arr dizinin tamaminin adresi ve turu char (*)[] dir.
                        // char*[] degildir. Bu baska bir tur. char(*)[6] da diyebiliriz. 6 elemanli char dizisinin adresi.
    printf("%s\n",arr);    // ancak %s senden bunu istemez %s senden char * tipinde bir isaretci ister.

printf("%p\n",(void*)arr); // daha dogru olani alttakine gore bu cunku %p format belirteci void* bekler. // bunu void* arr seklinde yazamazsin
                                                                                                    // type casting yapiyosun digeri yeni
                                                                                                        // bir pointer tanimliyo gibi olur.


printf("%p\n",arr); // arr yazdigimizda derleyici onu &arr[0] yaptigi icin. Basina (void*) koymasanda o zaten bir char* oldugu icin sorunusuz calisacaktir.


//not: char* turunde +1 ilerlemen seni dizideki bir sonraki elemana mi goturur. sonraki diziye mi goturur? char* in neyi gosterdigine gore mi degisir?
// char* bir karakterin adresi oldugu icin onu 1 arrtirman demek seni sonraki karaktere gecirir.

//char *p=arr; yaparsan elemanlari gezdirir.
//char *p=&arr; yaparsan dizileri gezmis olursun. veya bunu yapamassin. bu yanlis. &arr nin turu char(*)[] demistik char* degil

// char (*)[] diye bu turu belirtirken () bu parantezi kullanmamizin sebebi pointer array ile karismasin istememizdir. char * [] ile karismasin.
  // bu fark operatorlerin onceliklerinden gelir. Teldeki chatgptden bak orda var detayi.

// char *[] ile char (*)[] ayni turler degildir. Birincisi pointer array dir. ikincisi bir diziyi gosteren pointerdir.
  // char (*p) [] pointerini yazdirmak icin de yine (void*)p kullanilir. Diger pointerlarda oldugu gibi.




  char *dizi[]={"elma","armut","uzum"}; // stringleri isaret eden pointer dizisi. Dizinin her bir elemani char* turunde. oyle mi ?
                                        // char *dizi[0]="elma";   oyle mi? hata olabilir.           (string sabiti -> bu konu biraz daha acilacak.)
                                        // char *dizi[1]="armut";
                                        // char *dizi[2]="uzum";

  printf("%s\n",dizi[1]);
  printf("%s\n",*dizi[2]);
  printf("%c\n",**(dizi+0));
  printf("%c",*(*(dizi+0)+1));

    return 0;
}
