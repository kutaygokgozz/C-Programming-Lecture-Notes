#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char arr[6]="8abcd";
    //char *p;
    //printf("%s\n%ld",p,strtol(arr,&p,10)); // ters sirayla yazdigimda yani "%ld\n%ld seklinde yaptigimda cikti alamiyorum. Cunku derleyici burda hangi
                                            //argumanin once degerlendirecegini garanti etmez.
                                            //Parametrelerin hangi sirayla hesaplanacagi kesin degildir.
                                            //Derleyiciye kalmistir. Bazi derleyiciler sagdan sola bazilari ise soldan saga degerlendirir.
                                            //Bu yuzden bir derleyicide dogru calisan kod baska bir derleyicide yanlis calisabilir.

                                            //ISO/IEC 9899 C standard (C99):
                                            //"The order in which function arguments are evaluated is unspecified."
                                            // Fonksiyon argumanlarinin degerlendirildigi sira belirtilmemistir.



     char arr[6]="8abcd";
     char *kutay;
     char **emre=&kutay;    // emre=&kutay ve *emre=kutay denklikleri saglanmis oldu.
     strtol(arr,emre,10);
     printf("%s",*emre);

     // Baska bir not: strtol a ikinci parametre olarak bir dizi gonderemessin cunku dizilerin adresleri sabittir ve degistirilemez.
     //pointer gondermek gereklidir.
     // strtol fonksiyonunun icinde diziye eleman kopyalamiyoruz yani strcpy kullanmiyoruz. Direkt olarak sayidan sonra gelen ilk karakterin adresini veriyoruz.
     // o yuzden dizi gonderemeyiz.

    return 0;
}
