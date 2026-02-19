#include <stdio.h>
#include <stdlib.h>
void diamond(int x);

int main()
{
    printf("Bir sayi giriniz: ");
    int sayi;
    scanf("%d",&sayi);
    diamond(sayi);

    return 0;
}

void diamond(int x)
{
    int k,n;

    for(k=1;k<=x;k++)
    {

        for(n=1;n<=x-k;n++)
            printf(" ");

        for(n=1;n<=k;n++)
          {
              printf("*");
          }

   printf("\n");
    }
}
