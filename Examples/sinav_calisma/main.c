#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=5,b=7;
    int *p=&a;
    int **pp=&p;

    printf("%d",*p);  // 5 yazar.
    printf("\n%d",**pp); // 5 yazar.
    printf("\n%x",&p); // p nin adresini yazar.
    printf("\n%p",&p); // p nin adresini yazar.
    printf("\n%p",*pp); // a nin adresini yazar.
    printf("\n%p",&a);  // a nin adresini yazar.

   //  *p=&b;  bu hatali bir satir cunku burda bir int degiskene int* atamaya calisiyosun.
   // dogrusu bir alt satirda yapacagim gibi int* bir degiskene int* degeri atamak. Yani adres tutan degiskene adres atamak.

   p=&b;
   // *p ye bir deger atamak istersen o b nin degeri olabilir.

    printf("\n%d",**pp); // art�k 7 yazar. Cunku p pointeri ilk basta a(nin adresini) yi gosteriyodu, simdi b yi gosteriyo.

    **pp=8;

    printf("\n%d",b); // 8 yazar cunku az once pointer kullanarak b ye dokunmadan b nin degerini 8 yaptik.

    *p=9;

    printf("\n%d",b); // 9 yazar son satirda b nin degerini pointerla 9 yaptik.




    return 0;
}
