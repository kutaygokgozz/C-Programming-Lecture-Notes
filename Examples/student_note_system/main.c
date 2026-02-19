#include <stdio.h>
#include <stdlib.h>




int main()
{

    FILE *dosya,*temp;
    int num,stuNUM,stuNOTE;
    char stuNAME[20]; //ogrenci ismini almak icin char dizisi
    int stuDELETE;

    printf("1.Yeni ogrenci ekle\n");
    printf("2.Tum ogrencileri listele\n");
    printf("3.Belirli bir ogrencinin notunu guncelle\n");
    printf("4.Belirli bir ogrenciyi sil\n");
    printf("5.Programi kapat\n\n");


    while(1)
    {

    printf("Seciminiz: ");
        scanf("%d",&num); //scanf icinde sayiyi aldiktan sonra \n koyma iki kere sayi alman gerekiyo,hataya yol acar.  //yapilacak islem icin sayi alma


        if(num==1)  //ogrenci ekleme
        {

            dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","a");

            printf("\n");
            printf("Ogrenci numarasini giriniz: ");
            scanf("%d",&stuNUM);
            fprintf(dosya,"%-10d ",stuNUM);

            printf("Ogrenci ismini giriniz: ");
            scanf("%s",stuNAME);
            fprintf(dosya,"%-7s ",stuNAME);
            //for(int i=0;i<20;stuNAME[i]='\0',i++);

            printf("Ogrenci notunu giriniz: ");
            scanf("%d",&stuNOTE);
            fprintf(dosya,"%-6d\n",stuNOTE);
            fclose(dosya);
            printf("%d numarali ogrenci basariyla listeye eklendi.\n\n",stuNUM);
        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        else if(num==2) // ogrenci listesini goruntuleme
        {
            dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","r");

            char ch;
           printf("\n");
            while((ch=fgetc(dosya))!=EOF)
                 {
                     putchar(ch);
                 }
                 printf("\n");

            fclose(dosya);
        }

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        else if(num==3) // ogrenci notu degistirme
        {
            int stuCHANGE,newNOTE;

            dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","r");
            temp=fopen("C:\\Users\\Kutay\\Desktop\\temp.txt","w+");
            printf("\n");
            printf("Notunu degistirmek istediginiz ogrencinin numarasini giriniz: ");
            scanf("%d",&stuCHANGE);

            printf("Yeni notunu giriniz: ");
            scanf("%d",&newNOTE);

            while(fscanf(dosya,"%d %s %d",&stuNUM,stuNAME,&stuNOTE)!=EOF) //while in kosulunu EOF olmadikca veya 3 e esit oldukca seklinde yazabiliriz.
            {
                if(stuNUM!=stuCHANGE)
             fprintf(temp,"%-10d %-7s %-6d\n",stuNUM,stuNAME,stuNOTE);

             else fprintf(temp,"%-10d %-7s %-6d\n",stuNUM,stuNAME,newNOTE);
            }

              rewind(temp); // temp dosyasina notu degismis sekilde ogrenci listesini yazdik simdi okuma yapacagimiz icin imleci basa aliyoruz.
              char ch;
              fclose(dosya); dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","w");
              while((ch=fgetc(temp))!=EOF)
              {
                  fputc(ch,dosya);
              }

              fclose(dosya);fclose(temp);

              printf("%d numarali ogrencinin notu basariyla guncellendi.\n\n",stuCHANGE);




        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        else if(num==4)  //silme
        {
            char ch;

            printf("\nSilmek istediginiz ogrenci numarasini giriniz: ");
            scanf("%d",&stuDELETE);

            dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","r+");
            temp=fopen("C:\\Users\\Kutay\\Desktop\\temp.txt","w+");


                while(3==fscanf(dosya,"%d %s %d",&stuNUM,stuNAME,&stuNOTE))

            {
                if(stuDELETE!=stuNUM)
                        fprintf(temp,"%-10d %-7s %-6d\n",stuNUM,stuNAME,stuNOTE);
            }

            fclose(dosya);
            dosya=fopen("C:\\Users\\Kutay\\Desktop\\ogrenci_not_sistemi.txt","w");
            rewind(temp); //temp dosyasindan okuma yapacagiz ama ilk once yazma islemi yaptigimiz icin imlec sonda basa almaliyiz.

                while((ch=fgetc(temp))!=EOF)
                  {
                      fputc(ch,dosya);
                  }

                  printf("%d numarali ogrenci basari ile silindi.\n\n",stuDELETE);

                  fclose(dosya); // burasi onemli,
                                // eger bu sekilde dosyayi kapamassan dosyayi tum ogrencileri listele sekmesinde okumak istersen hatali okursun.

                  fclose(temp);
        }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        else if(num==5) // programi kapat
            {
             printf("\nCikis yaptiniz.Hoscakalin.\n\n\n");
             return 0;
             }











}}


                   // c standartlari der ki: eger bir dosya okuma ve yazma modunda acildiysa yani a+ , w+ veya r+ seklinde okuma isleminden sonra yazma
                  // yapacaksan araya mutlaka dosya konumu degistirme fonksiyonu koymalisin. fseek , rewind gibi.
                 // ayni sekilde yazma isleminden sonra okuma yapilacaksa araya mutlaka fflush, fseek veya rewind fonksiyonlarindan biri gelmelidir.

               // Ancak bir dosyada belli bir veriyi silmek istiyorsak veya degistirmek istiyosak (diger verilere dokunmadan) en sagliklisi gecici bir
              // temp dosyas� olusturup oraya sadece istedigimiz verileri yaz�p sonra asil dosyamizin ustune temp dosyanin
             // tamamini yazmaktir.

                                                            //fgets satir okuyan bir fonksiyondur \n e kadar okur \n karakterini de diziye yazar.
                                                           // okumada hata cikarsa veya dosya sonuna gelirse NULL dondurur.
                                                          // a modunda bir dosyayi actigimizda imlecin konumu en sonda olur.En sona ekleme yapariz
                                                         // fseek fonksiyonu kullanarak imlecin yerini degistirsen bile a modunda acildigi icin her zaman
                                                        // en sona ekleme yapilir.







