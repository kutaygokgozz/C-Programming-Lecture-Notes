#include <stdio.h>
#include <stdlib.h>
int rakamlartoplami(int *p);
int main()
{
    printf("Rakamlari toplanacak sayiyi giriniz: ");
    int x;
    scanf("%d",&x);
    printf("Sonuc: %d",rakamlartoplami(&x));
    return 0;
}
int rakamlartoplami(int *p)
{
    int sum=0;
    while(*p>0)
          {sum=*p%10+sum;

            *p=*p/10;
          }
          return sum;
}
