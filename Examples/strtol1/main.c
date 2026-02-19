#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[10]="1001abcd";
    //char *p;
    printf("%ld",strtol(arr,NULL,2));// base parametresi stringteki sayiyi o tabanda gor demek.Fonksiyon bize decimal cikti veriyor.

}
