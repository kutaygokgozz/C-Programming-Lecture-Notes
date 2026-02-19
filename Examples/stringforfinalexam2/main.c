#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

  char arr[50];
  char *token;
  char newarr[10][20];
  gets(arr);
  token=strtok(arr," ");
  int i=0;
  while(token!=NULL)
  {
      strcpy(newarr[i],token); // bu satirda tokenin tuttugu adresten basla '\0' karakter gelene kadar tek tek newarr ye elemanlari kopyala diyoruz.
      token=strtok(NULL," ");  // bu satirdan sonra strcpy satiri gelmemeli cunku token kelime parcalanacak kelime kalmadiginda NULL olacak.
                                // ama biz gidip strcpy ye NULL verirsek newarr[i] ye kopyala diye program coker.

  i++;                             //burda newarr diye bir diziye ihtiyacimiz var cunku kelimeleri tersten yazdirmak istiyoruz.
  }                                  //eger ayni sira ile yazdirmak isteseydik direkt tokeni yazdirabilirdik.
  for(i=i-1;i>=0;i--)
  {
      printf("%s ",newarr[i]);
  }
                       // token i biz strtoldan donen degere esitliyoruz strtol parcaladigi kelimenin ilk adresini donduruyor
                       // parcalayacak kelime kalmadiginda NULL donduruyor. NULL bos bir bellek adresidir.Hicbir seyi gostermeyen pointer anlamina gelir.
                       // '\0' bu karakter olan null degerdir. strtok fonksiyonuna parametre olarak bu degeri versekte calisir ancak dogru bir sey yapmis
                       // olmayiz derleyici otomatik olarak onu (void*)'\0' seklinde cast eder ve o sekilde calisir. Ancak strtok bizden adres ister.
                       // biz ona kaldigin yerden devam et demek icin bos bellek adresi olan NULL u vermemiz gerekir.
       return 0;


}






