#include <stdio.h>
#include <stdlib.h>

//bir dosyadan baska dosyaya veri kopyalayan program.

int main()
{
    FILE *dosya,*hedefdosya;

    dosya=fopen("C:\\Users\\Kutay\\Desktop\\c_dosya_ornek.txt","r");
    hedefdosya=fopen("C:\\Users\\Kutay\\Desktop\\hedef_dosya.txt","w");
    char ch=0;

    while((ch=fgetc(dosya))!=EOF)
    {
     fputc(ch,hedefdosya);
    }
        fclose(dosya);
        fclose(hedefdosya);









    return 0;
}
