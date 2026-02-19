#include <stdio.h>
#include <stdlib.h>

//konsoldan yazi alip dosyaya yazan program. konsolda bos enter basilana kadar devam eder.
int main()
{
    FILE *fl;
  fl=fopen("C:\\Users\\Kutay\\Desktop\\c_dosya_ornek.txt","w");

    if(fl==NULL) {printf("dosya acilamadi."); return 1;}

    char arr[50];
    do
    {
        gets(arr);
        fprintf(fl,"%s\n",arr);

    }
    while(strlen(arr));
    fclose(fl);

    return 0;
}
