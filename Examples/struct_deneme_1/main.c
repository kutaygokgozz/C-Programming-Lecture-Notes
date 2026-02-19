#include <stdio.h>
#include <stdlib.h>


struct araba
{
 int hiz;
 int model;
 char marka[9];

 int arr[50];
};

int main()
{
struct araba a1;
int arr[3]={1,2,3};
memcpy(a1.arr,arr,3*sizeof(int));

for(int i=0;i<3;i++)
printf("%d",a1.arr[i]);

//a1.arr ile arr farkli degiskenler.



    return 0;
}
