#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[30];
    gets(arr);
    char *p=arr;
   printf("%s",strupr(p));
    return 0;
}
