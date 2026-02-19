#include <stdio.h>
#include <stdlib.h>

int main(){

// Onemli not: ikinci scanf lerin icine bosluk %c yazmazsak hatali calisiyor cunku onceki scanf icin karakter girip enter a bastiktan sonra
// ikinci scanf bizim girdigimiz karakteri degil onceki bastigimiz enter dan kaynaklanan \n i yani bosluk karakterini aliyor. ama sen scanf in icine
// bosluk koydugunda o karakteri yutup senin girdigin karakteri almis oluyor.



/* aklindan tuttugun sayiyi bulduran program*/

int my3,my4,x;
char durum1,durum2,durum3;
printf("Aklindan bir sayi tut\n\nBu sayiyi 3 ile carpip 2 ye bol.\nSonuc ondalikli mi? Evet ise e yaz.Degil ise h yaz.\n\n");

scanf(" %c",&durum1);
if(durum1=='e')
    {
    printf("\nSayiyi bir ust tam sayiya yuvarla ve tekrar 3 ile carpip 2 ye bol.\nCikan sonuc ondalikli mi?\n\n");

scanf(" %c",&durum2);
    if(durum2=='e')
       {
          printf("\nSayiyi bir ust tam sayiya yuvarla ve icinde kac tane 9 oldugunu yaz.\n\n");
          scanf(" %d",&x);
          printf("\nTuttugun sayi %d\n\n\n",4*x+3);
       }
else if(durum2=='h')
        {
            printf("\nSonucun icinde kac tane 9 var?\n\n");
            scanf("%d",&x);
            printf("\nTuttugun sayi %d\n\n\n",4*x+1);
        }
    }
else if(durum1=='h')

     {
       printf("\nCikan sonucu tekrar 3 ile carp 2 ye bol.\nSonuc ondalikli mi?\n\n");
          scanf(" %c",&durum3);
          if(durum3=='e')
          {
              printf("\nSayiyi bir ust tam sayiya yuvarla ve icinde kac tane 9 oldugunu yaz.\n\n");
              scanf("%d",&x);
              printf("\n\nTuttugun sayi %d\n\n\n",4*x+2);
          }
             else if (durum3=='h')

            {
              printf("\nSonucun icinde kac tane 9 var?\n\n");
              scanf("%d",&x);
              printf("\nTuttugun sayi %d\n\n\n",4*x);



            }

      }
scanf("%d",&x);

}








