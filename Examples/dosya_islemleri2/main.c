#include <stdio.h>
#include <stdlib.h>

//dosyaya yazi yazip dosyadan okuma yapan program.

int main()
{
    FILE * dosya=fopen("C:\\Users\\Kutay\\Desktop\\c_dosya_ornek.txt","w");

    char ch;
    while((ch=getchar())!=-1)
    {
        fputc(ch,dosya);
    }   // bu dongu sen konsola EOF yazana kadar devam eder. klavyede EOF ctrl+z dir.
    fclose(dosya);

    dosya=fopen("C:\\Users\\Kutay\\Desktop\\c_dosya_ornek.txt","r");

    while((ch=fgetc(dosya))!=-1)
    {
        putchar(ch);    // \n de bir karakter oldugu icin (ascii kodu:10) bu donguyle dosyayý oldugu gibi konsola yazariz.
    }
    fclose(dosya);
    return 0;
}
