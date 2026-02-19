#include <stdio.h>
#include <stdlib.h>
void revstr(char(*p)[8]);
int main()
   {
    char arr[][8]={"messi","xavi","iniesta","neymar","suarez"}; // 8 i az veya fazla yazarsan hatali cikti veriyor.
    revstr(arr);
    int i;
    for(i=0;i<5;i++)
       {
        printf("%s\n",arr[i]);
       }
    return 0;
}

revstr(char(*p)[8])
   {
    char res;
    int i=0,len;
    for (;i<5;i++)
    {
        len=strlen(*(p+i));   // baslangicta bu satiri for da bos biraktigim yere yazmistim ancak unuttugum bir sey vardi ki o kisim for da sadece ilk basta
        for(int j=0;j<len/2;j++)// calisiyor. Hataliydi buraya alinca duzeldi.
         {
                res=*(*(p+i)+j);
                *(*(p+i)+j)=*(*(p+i)+len-j-1);   //+ len koymasam ne olur acaba? hata veriyor derleyici.
                *(*(p+i)+len-j-1)=res;

         }





    }
   }


