#include <stdio.h>
#include <stdlib.h>

int main()
{
char str[]={'s','e','l','a','m'}; // sonuna null karakter eklemedigim icin bu bir karakter dizisidir ama string degildir.
printf("%s",str); // Bu sekilde string olarak bastirmak istersek cop karakterler basabilir. Basmadigi durumlarda olabilir. Bu tamamen o anki duruma bagli
                // en guvenlisi karakter karakter tanimliyorsan ve string olarak kullanacaksan en sonda null oldugundan emin ol.

printf("\n");
for(int i=0;i<5;i++)
{
    printf("%c",str[i]);  // bu sekilde basacagimiz son karakteri bildigimiz icin cop karakter yazma riskinden kurtulmus oluyoruz
                           // ancak string yazdirmak istersek null u eklemek zorundayiz.
}
   return 0;
}
