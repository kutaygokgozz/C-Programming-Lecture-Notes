#include <stdio.h>
#include <stdlib.h>

int main()
{int i;
         int orneksayi=42;


    do
    {scanf("%d",&i);
    if(i==42)
        {
          printf("Tebrikler");
        }
    else if(i<42)
 {printf("daha buyuk bir sayi girin");
scanf("%d",&i);


 }
    else{printf("daha kucuk bir sayi girin");
    scanf("%d",&i);}

    }
    while(i==42);







    return 0;
}
