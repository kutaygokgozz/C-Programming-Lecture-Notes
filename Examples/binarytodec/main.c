#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void binarytodec(char (*p)[5]);
int main()
{
    unsigned char arr[][5]={"1101","1111","1001","1000"};
    binarytodec(arr);
    int i;


    for(i=0;i<4;i++)printf("%s ",arr[i]);

    return 0;
}

void binarytodec (char (*p)[5])
{
    int i;
    for(i=0;i<4;i++)
    {
        sprintf(*(p+i),"%d",strtol(*(p+i),NULL,2));  //*(p+i) denktir arr[i] denktir &arr[i][0]
        // stringe deger atayamassin. sadece tanimlarken atama yapabilirsin.




       // decimal=*(p+i)%10*1;    boyle yapamayiz cunku stringi once int e cevirmen lazim.
        //arr[i]/=10;
    }
}
