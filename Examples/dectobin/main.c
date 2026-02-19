#include <stdio.h>
#include <stdlib.h>
void dectobin(int dec);

int main()
{
    int decnum;
    printf("Decimal sayi giriniz: ");
    scanf("%d",&decnum);
    dectobin(decnum);







    return 0;
}

void dectobin(int dec)
{
    int i;                       // 0101     0000
    for(i=7;i>=0;i--)
    {


        if(((dec>>i)&1)==1)
        {
            printf("1");
        }
        else {printf("0");}

    }


}
