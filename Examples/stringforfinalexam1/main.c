#include <stdio.h>
#include <stdlib.h>
void findstr(char *p);
int main()
{
    printf("enter a sentence:\n");
    char arr[50];
    gets(arr);
    findstr(arr);
    return 0;
}
void findstr(char *p)
{
    int i;
    while(*(p+i)!=NULL)
    {
     i++;
    }
    printf("the lenght of the given sentence: %d",i);
}
