#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[][8]={"messi","xavi","iniesta"}; // diziyi tanimlarken sutun sayisini belirtmemiz gerekiyor.Burda en uzun satir en uzun string iniesta oldugu icin
                                               // 8 yazdik iniesta 7 harfli +1 karakterde null icin.

    printf("%s\n",arr[0]); // messi yazar. arr[0] bir dizidir. turu de char* oldugu icin %s e verebiliyoruz.
    printf("%s\n",arr[1]); // xavi yazar.
    printf("%s\n",arr[2]); // iniesta yazar.

    printf("%s\n",*(arr+0));  // *(arr+0) ile arr[0] ayni sey.   arr ile &arr[0] da ayni sey. sen her ikisinin de basina gidip * koydugunda * ile & sadelesiyor
                                                                  // ve arr[0] kaliyor.

    printf("%c\n",arr[0][0]); // m yazar.
    printf("%c\n",arr[1][0]); // x yazar.
    printf("%c\n",arr[2][1]); // n yazar.

    char (*p)[8];// 8 elemanli stringleri gosterebilecek pointer tanimlamis olduk.
    p=arr;       // arr iki boyutlu bir dizi oldugu icin bu tanimlamayi yapabiliriz. Cunku arr, &arr[0] a denk oldugu icin turu char (*)[] oldu. p nin turu
                  // ile ayni olmus oldu. Su anda p pointeri arr iki boyutlu dizisinin ilk satirinin adresini gosteriyor.

 printf("%s\n",*(p+0)); // bu sekilde ilk satiri yani messi yi yazdirabiliriz.
 printf("%s\n",*(p+1)); // bu sekilde de ikinci satiri yani xaviyi yazdirabiliriz.
 printf("%s\n",p[2]);
    return 0;
}
