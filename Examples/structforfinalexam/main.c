#include <stdio.h>
#include <stdlib.h>



struct PupilRec
{
    char fName[50];
    int fMark;
};

void MakeOrdered(struct PupilRec kuti[5]); //struct veri tipinde tanimladigin degisken dizi ise fonksiyonda
                                            // karsilarkende dizi ile karsilamalisin.

int main()
{
    struct PupilRec players[5]={"Armstorng",99,"Azur",64,"Bates",33,"Zarra",81};
    MakeOrdered(players);
    return 0;
}

void MakeOrdered(struct PupilRec kuti[5])
{
    int i,j;
    struct PupilRec temp[5];

    for(i=0;i<4;i++)
    {for(j=0;j<4;j++)
       {
          if(kuti[i].fMark<kuti[j].fMark)
            {
            temp[i]=kuti[i]; kuti[i]=kuti[j]; kuti[j]=temp[i];  // direkt tum elemanlari birbirine kopyaliyor.

            }
       }

    }
for(i=0;i<4;i++)
  {
    printf("%9s%3d\n",kuti[i].fName,kuti[i].fMark);
  }
}
