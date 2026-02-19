#include <stdio.h>
#include <stdlib.h>

int main()
{


    /* Not: Bir karakter dizisinin son elemaný her zaman null olur. Tam sayý dizileri için bu geçerli deðildir.
            Dizinin sýfýrýncý index i birinci elemanýný gösterir, birinci indexi ikinci elemanýný gösterir.
    */






//-----------------------------------------------------------------------------------------------------------------------------------



   //  Girilen dizinin kaç elemanlý olduðunu söyleyen program
    /*int x,i;
    char name[100];
printf("Bir isim giriniz: ");
scanf("%s",name);
for(i=0;name[i]!='\0';i++)
{

}
printf("Girdiginiz isim %d harflidir.",i); */




//---------------------------------------------------------------------------------------------------------------------------------------



//dizi elemanlarýný ters çeviren program
// Burada önemli olan kýsým ikinci for un içindeki ilk kýsým x=i-1
//önemli olan ikinci kýsým dizinin elemanlarý ve indeks numarasý arasýndaki +1 iliþkisi.

/*int i,n,x;
printf("Dizinin eleman sayisini giriniz.");
scanf("%d",&i);
int revnumber[i];
for(x=0;x<i;x++)
    {printf("Dizinin %d. elemanini giriniz ",x+1);
    scanf("%d",&revnumber[x]);
    }

printf("Dizinin elemanlarinin ters cevirilmis hali su sekildedir:");
for(x=i-1;x>=0;x--)
    {
     printf("%d",revnumber[x]);

    }*/

//-----------------------------------------------------------------------------------------------------------------------------------

//Girilen karakter dizisinin elemanlarını ters çeviren program
// string alırken scanf içinde dizinin ismini parantezli şekilde girmene gerek yok direkt olarak ismini girmen yeterli mesela burda name gibi.
//bir dizi oluþtururken dizinin kaç elemanlý olduðunu belirtmen gerekir veya dizinin elemanlarýný da diziyi tanýmlarken tanýmlaman gerekir.Burda dizinin eleman
//Burda yaptığım hatalardan biri ilk forun içinde name[i]!='\0' şeklinde değilde direkt olarak i!='\0' yazmamdı. Ezbere yapma.
/*int i;
char name[100];
printf("Ters cevirilecek olan diziyi giriniz.");
scanf("%s",name);

for(i=0;name[i]!='\0';i++)
{}
for(;i>=0;i--)
{printf("%c",name[i]);}*/




//-----------------------------------------------------------------------------------------------------------------------------------
//char name[4]="hey"; //NULL ile beraber 4 karakterli bir dizi.
/*printf("%s",name[3]);
printf("%x"*name);*/












   return 0;
}
