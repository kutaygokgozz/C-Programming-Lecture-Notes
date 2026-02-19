#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int *p);
int main()
{
    int x;
    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d",&x);
    //faktoriyel(&x);
    printf("sonuc: %d",faktoriyel(&x));
    return 0;
}
int faktoriyel(int *p)
{
    int fak=1;
    int i=0,j=0;
    while(*p>0)
    {
        fak=(*p)*(fak);

    (*p)--; // *p-- yazmistim o yuzden hatali calisti. Oncelik sirasi!!!



    }
  //  printf("%d",fak);
   return fak;
}
