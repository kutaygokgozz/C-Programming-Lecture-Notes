#include <stdio.h>
#include <stdlib.h>

int main()
{



    int num,num2;
    printf("%d\n",scanf("%d  %d",&num,&num2)); //bu printf basarili okuma sayisini yazar.
    printf("%d %d",num,num2);

    //girilen input 5 ve 4 whats the output?

    //scanf basarili okuma sayisini dondurur. Hatali okumalarda mesela format tipi uyusmadiginda (mesela %d icin abc girildiginde) 0 dondurur.
    // fscanf dosya sonuna gelirse EOF dondurur.


    //scanf in icinde %d %f %s gibi yerlerde araya bosluk veya \n koysanda olur koymasanda olur.Cunku scanf %d %f %s gibi icin okuma yapiyorsa tampondaki
    // bosluklari otomatik olarak atlar.
    // Fakat scanf icinde %c kullaniyosan araya bosluk koymak cok onemlidir. Cunku boslukta bir karakter oldugu icin (ascii kodu:32) %c i boslugu alir.
    // almamasini istiyosan senin scanf icinde bosluk koyman gerekir.
    // ayni sekilde scanf ile %c okuyacaksin ve direkt entera bastin scanf enter i yani \n i alir. Cunku o da bir karaekterdir. Ascii kodu:10


    // scanf ile %d aliyosun diyelim. ilk basta hibcir tam sayi tuslamadan yanlislikla enter a basarsan %d enter i almaz. Bosluk karakteri gibi onu da atlar.
    // ancak %c ile okuma yapiyosan hicbir sey tuslamadan direkt enter a basarsan karaktere \n atamis olursun. Aradaki fark onemli!

    return 0;
}
