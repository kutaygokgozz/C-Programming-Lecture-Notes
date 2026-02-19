#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i=0;

    while(i<128)
    {
        if(isdigit(i)) printf("tam sayidir\n");  // 48 ve 57 ascii kodu arasýndakiler tam sayidir.
        else printf("tam sayi degildir.\n");      // digerlerinde else calisir. cunku isdigit ten sifir doner.

    i++;
    }
    return 0;
}
