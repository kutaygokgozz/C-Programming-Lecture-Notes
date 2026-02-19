#include <stdio.h>
#include <stdlib.h>

int main()
{
//[] koseli parantez icine son indeks numarasi +1 veya null dahil eleman sayisi.
char arr[]={'a','b','c'};
int len=strlen(arr);
printf("%d",len);


//______________________________________________________________________________________________________________
 char str[]={"cag2ori"};
 int dig=0,i=0;
 while(str[i]!=NULL)
 {
     if(isdigit(str[i]))    //c type library. isdigit sayi mi diye bakiyor. dizide kac tane sayi var diye yazdigimiz kod.
     {
         dig++;

     }
 i++;
 }
 //_______________________________________________________________________________________________________________

 // strtol => int base => sayi sistemi demek.
 // sayi sistemini 3 yapsanda sayi bozulana kadar alir. sol kismi.yani 3 ve 3 ten buyuk bir sey gelirse almaz. strtol.
 // atoi  atof   strtod  strtol

// standart input-output library functions : getchar   gets  putchar   puts   sprintf   sscanf

//_____________________________________________________________________________________________________________________

char arr[]="cagri absolutely stunned me";
char *token;
token strtok(str," ");
while(token)
{
    puts(token);
    token=strtok(NULL," ");
}

//_____________________________________________________________________________________________________________________-


// strcpy vesaire


// *memcpy   *memmove    memcmp   *memchr    *memset





    return 0;
}
