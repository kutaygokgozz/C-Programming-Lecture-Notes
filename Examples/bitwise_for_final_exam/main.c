#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kullanici tarafindan girilen decimal sayiyi 8bit binary e ceviren program.
    // only while loop, only two variable.
    //use bitwise operators.
    int dec,i=7;
    scanf("%d",&dec);

    while(i>=0)
    {
     if((dec>>i)&1)putchar('1');
     else putchar('0');
     i--;
    }
    return 0;
}
