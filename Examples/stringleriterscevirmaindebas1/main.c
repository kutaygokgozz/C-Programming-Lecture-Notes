#include <stdio.h>
#include <stdlib.h>
void revstr(char (*p)[8]);
int main()
{
    char arr[][8]={"suarez","neymar","messi","xavi","iniesta"};
    revstr(arr);
    for(int i=0;i<5;i++)
    {
        printf("%s\n",*(arr+i));// arr[i] de yazabilirdim show olsun diye boyle yazdim :)
    }

    return 0;
}
void revstr(char (*p)[8])
{
    char res[8];
    int i,j,len;
    for(i=0;i<5;i++)
    {
        len=strlen(*(p+i));
        for(j=0;j<len;j++)   //len-1 yapmistim < yaptigim halde yanlis calisiyodu.
        {
           res[j]=*(*(p+i)+len-1-j);
        }
        for(j=0;j<len;j++) //burasida len-1 di.
        {
            p[i][j]=res[j]; //*(*(p+i)+j) de yazabilirdim ancak p[i][j] seklinde de yazabilecegimizi hatirlatmak istedim.
        }
    }
}
