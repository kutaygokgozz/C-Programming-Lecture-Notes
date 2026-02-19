#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char num1=5,num2=3;  // num1=0000 0101   num2=0000 0011   result &: 0000 0001  result | =0000 0111

    printf("%d",(num1&num2)<<1);

    return 0;
}
