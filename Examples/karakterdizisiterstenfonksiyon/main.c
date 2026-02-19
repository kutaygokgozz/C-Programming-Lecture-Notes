#include <stdio.h>
#include <stdlib.h>
//Bir fonksiyon parametre alacak diye tanimladiktan sonra o fonksiyon icinde o degiskeni artik kullanabilirsin.
// fonksiyonun icinde parametre tanimlamak demek o fonksiyonda degisken tanimlamak demek gibi bir sey.
void revname(char name[],int i);
int mystrlen (char name[],int i);


int main()
{
    while(1){
    printf("\nBir dizi giriniz:");
    char name[100];
    int i=0;
    scanf("%s",name);
    revname(name,i);
    }
    return 0;
}




void revname(char name[],int i)
{ for(i=mystrlen(name,i);i>=0;i--)
   {
       printf("%c",name[i]);
   }
}

int mystrlen(char name[],int i)
{
 while(name[i]!='\0')
 {
     i++;
 }
return i;}







