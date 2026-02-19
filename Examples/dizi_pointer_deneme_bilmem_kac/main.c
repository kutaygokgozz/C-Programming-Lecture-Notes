#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[]={"selam"};
    printf("%s\n",arr); // %s karakter dizisini isaret eden adresi bekler. char* yani.
    printf("%c\n",*arr);  // *arr ≡ arr[0] ≡ *(arr+0)     *(&arr[0]) yaptigimizda yildiz ile & in sadelestigini soyleyebiliriz.
    printf("%c\n",arr[0]); // burda arr -> &arr[0] a donusmuyor cunku direkt ilk elemani belirtiyoruz.

    char *ptr[]={"elma","armut","uzum"}; // *ptr[0]="elma", *ptr[1]="armut", *ptr[2]="uzum";
    printf("%s\n",ptr[1]);



char dizi[]="karpuz";
char (*p)[]=&dizi; // burda sadece dizi yazsaydikta hata almazdik cunku dizinin ilk elemaninin adresi ve dizinin adresi aynı diye. Ancak dogru kullanim budur.
                      // cunku (*)[] turu dizinin tamamina isaret eden bir pointer turudur o yuzden dizinin tamaminin adresini vermek gerekir.


    printf("%c\n",(*p)[0]); // (*p)[] nin turu char oluyor. p nin turu ise (*)[] olur.
    printf("%c\n",(*p)[3]);// (*p)[3] burda dizinin ucuncu indexine tekabul ediyor.


   printf("%s\n",(char*)(*p)); // %s char* bekledigi icin bu diziyi %s e verirken type cast yapmamiz lazim. Yani char* turune donusturmemiz lazim.
                      // Ama zaten (*p) dizinin kendisi oldugu icin yani turu char [] oldugu icin type cast yapmasakta sorunsuz dogru bir sekilde
                      // calisirdi. Su sekilde:
   printf("%s",(*p)); // bu da yine aynı sekilde dizinin tamamini basar cunku (*p) = dizi.  dir ki bu da derleyici tarafindan yine &dizi[0] olarak okunur.
    return 0;
}
