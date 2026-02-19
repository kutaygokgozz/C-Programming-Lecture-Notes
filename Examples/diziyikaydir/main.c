#include <stdio.h>
#include <stdlib.h>


void shiftarr(char dizi[],int len);
int main()
{
    printf("Bir dizi giriniz: ");
    int x,k;
    char arr[100];
    scanf("%s",arr);
    x=strlen(arr);

        shiftarr(arr,x);



    return 0;
}
void shiftarr(char dizi[],int len)
{
    char res[100];
    char k;
    while(1)
        {
            res[0]=dizi[len-1];

         for(k=0;k<=len-1;k++)//dogrusu len -2 fakat len -1 yapsanda olur cunku ilk elemana onceden atama yaptik. ama yazdýrýrken len-1 degilde len e kadar
                            // yazdirirsan ve len -1 yapmis olursan. res dizisini normalden bir eleman daha uzun yazdirmis olursun.
             {
               res[k+1]=dizi[k];
             }
                for(k=0;k<=len-1;k++)
                   {
                     printf("%c",res[k]); // Burda bir birim saga kaydirilmis hali ekrana yaziyor.
                   }

            printf("\n"); // Bir sonraki satirdan devam etmek icin.
                for(k=0;k<=len-1;k++)
                   {
                       dizi[k]=res[k];  // burda da kaydirilmis diziyi tekrardan kaydiracagimiz icin res i diziye atýyoruz.
                   }

                   while(1)
            {scanf("%d",&k);             //burda biz 1 girene kadar derleyiciyi bu donguye hapsetmis oluyoruz.
                if(k==1) break;
                }
       }

}
