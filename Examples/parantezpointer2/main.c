#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[][6]={"selam","naber","kutay"};
    char (*p)[6];
    p=arr;

    printf("%c\n",*(*(p+1)+1));
    printf("%c\n",*(*(p+2)));
    printf("%c\n",*(p+1)[0]);







    return 0;
}
