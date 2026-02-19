#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char (*p)[6];
    char arr[6]={"messi"};
    p=&arr;
    printf("%s",*p); // %s e arr ile denk olan bir sey vermem lazim.
    */


    char (*p)[6];
    char arr[6]={"messi"};
    p=arr;                                    // sen p ye dizinin degil ilk elemaninin adresini de versen
                                             //p dizi adresi tutan bir pointer oldugu icin ilk * ile dizinin kendisine ikinci * ile
    printf("%c\n",*p); //hicbir sey yazmaz. // dizinin karakterlerine ulasirsin. yani yine &arr vermissin gibi olur. Zaten dogru olanda o cunku
    printf("%c\n",**p);// m yazar.         // p bir boyutlu bir diziyi isaret eden pointerdir. Yani bir boyutlu dizinin tamaminin adresini saklayan pointerdir.
    printf("%s\n",*p);// messi yazar.

   //ilk printf hicbir sey yazmadi cunku ub oldu yani undefined behaviour.
return 0;
}



// ayri not : %s bir isaretci ister. yani bir adres ister. bir char dizisinin ilk elemaninin adresini ister.
