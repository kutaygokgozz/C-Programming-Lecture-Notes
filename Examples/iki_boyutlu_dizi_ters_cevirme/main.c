#include <stdio.h>
#include <stdlib.h>
void revstr(char (*p)[6]);

int main()
{
    char arr[][6]={"elma","armut","uzum"};  // arr nin ikinci parantezini doldurmak zorundasin.
    revstr(arr);
    /*for(int i=0;i<3;i++)
        {
         printf(" %s",arr[i]);
        }
*/
    return 0;
}
void revstr(char (*p)[6s]) //iki boyutlu dizi gonderdigin icin ya iki boyutlu dizi ile karsilamalisin ya da (*)[] ile karsilamalisin.
{                           // (*p)[5]=&arr; olmus oldu.
    for(int i=0;i<3;i++)
      {
int len=strlen(p[i]);
        for(int k=len-1;k>-1;k--)
    {
        printf("%c",p[i][k]);

    }printf("\n");
      }

}
