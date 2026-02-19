#include <stdio.h>
#include <stdlib.h>
struct daire {

int yaricap;

};

void hesap(int a);
int main()
{
    struct daire x;
   printf("Dairenin yaricapini giriniz: ");
    scanf("%d",&x.yaricap);
    hesap(x.yaricap);
    return 0;
}

void hesap(int a)
{
    printf("dairenin alani %d\n",3*a*a);
    printf("dairenin cevresi: %d",2*3*a);

}
