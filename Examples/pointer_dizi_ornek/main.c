#include <stdio.h>
#include <stdlib.h>

void showarr(char *a,int len);
int main()
{
    char arr[100];
    scanf("%s",arr);
    int x;
    x=strlen(arr);
    showarr(arr,x);
    printf("%s",arr);
    return 0;
}

void showarr(char *a,int len)
{
    char res;
    for(int i=0;i<len/2;i++)
    {
        res=*(a+i);
        *(a+i)=*(a+len-i-1);
        *(a+len-i-1)=res;
    }
}
