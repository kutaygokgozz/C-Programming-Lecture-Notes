#include <stdio.h>
#include <stdlib.h>
//final for exam deki sorunun tek while ile yapilmis hali.
int main()
{

    FILE *fl;
    fl=fopen("C:\\Users\\Kutay\\Desktop\\binary_dosya.txt","r");
    char arr[5];
    while(fscanf(fl,"%s",arr)==1)
    {
        printf("%d\n",strtol(arr,NULL,2));
    }
    return 0;
}
