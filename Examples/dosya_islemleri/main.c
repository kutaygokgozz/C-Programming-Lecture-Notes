#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *dosya;
    dosya=fopen("C:\\Users\\Kutay\\Desktop\\c_dosya_ornek.txt","r");


    if(dosya==NULL) {printf("dosya acilamadi."); return 1;}

    char ch; char arr[700]={NULL};
    while(fgets(arr,700,dosya)!=NULL)
    {
        printf("%s",arr);

                                         //\n bir karakterdir ve ascii kodu 10dur. fgetc veya fscanf onu da okur.
                                        //  fscanf te dosya sonuna geldiginde EOF dondurur. fgetc gibi.
                                       // fgets fonksiyonu pointer donduren bir fonksiyondur. okumada hata olursa veya sona gelirse NULL dondurur. basarili
                                       //okumada satirin adresini dondurur.
                                      // fgetc ve fscanf int dondururler. basarili ise fgetc okunan karakterin ascii kodunu dondurur.
                                     // fscanf ise basarili okumada format specifier sayisini dondurur. basarisizlarda EOF dondururler demistik.
    }


    fclose(dosya);
    return 0;
}
