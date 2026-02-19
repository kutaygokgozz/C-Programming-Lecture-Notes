#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//strtol yasak.
void bintodec(char (*p)[5]);
int main()
{
    //char arr1[][5]={{1,55},{23,25,27}};
    char arr[][5]={"1111","1001","1100","1010"};

    bintodec(&arr);
    int i;
    for(i=0;i<=3;i++)
        printf("\n%u",arr[i][0]);


    return 0;
}
void bintodec(char (*p)[5])
{
int i,j,pw=1,decnum=0;
    for(j=0;j<=3;j++)
        {
         for(i=3,pw=1,decnum=0;i>=0;i--)
           {
             p[j][i]=(p[j][i]-('0'));
             decnum=(decnum+(p[j][i]*pw));
             pw*=2;
           }
      p[j][0]=decnum;

        }

}
