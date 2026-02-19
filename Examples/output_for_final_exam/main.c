#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="11036num";
    int ds=0;
    long num;
    unsigned char m=0x80,*end;
    for(num=strtol(str,NULL,2);m!=0;ds+=num,m>>=1);  //complex for. govdesini bos biraktigimiz icin sonuna ; koymak zorundayiz.

    printf("%d",ds);

// end i sadece strtola yazmak icin tanimlamis ama kullanmadigimiz icin gerek yok. NULL yazmak yeterli.

    return 0;
}
