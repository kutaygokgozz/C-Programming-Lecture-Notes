#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * dosya=fopen("C:\\Users\\Kutay\\Desktop\\fseek.txt","r+"); // r+ modunda acarsak imlec ilk bastan baslar ve fseekle konumunu istedimiz
                                                                    // yere ayarlayabiliriz. ancak a modunda acarsak imlec her zaman en sonda olur ve fseekle
                                                                   // degistirmeye calissak bile sona yazar.
    fseek(dosya,0,SEEK_END);
    fputs(" kutay",dosya);
    return 0;
}
