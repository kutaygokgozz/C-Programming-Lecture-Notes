#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    int i=0,j=0,maks;
    while(i<9)
        {
        scanf("%d",&arr[0][0]+i); // bu satir onemli. Hoca bizden totalde 3 while 1 if kullan dedigi icin dizinin elemanlarini bu sekilde aldik.
                                   // yoksa ic ice dongu kullanarak daha rahat sekilde alabilirdik.
       i++;
        }


        i=0;

        while(i<3)
         {
             j=0;
            maks=arr[i][j];


               while(j<2) // 3 e kadar degil 2 ye kadar. dikkat!
                    {
                        if(arr[i][j]<arr[i][j+1])
                        {
                         maks=arr[i][j+1];

                        }

                          j++;
                    }
                     printf("\n%d. satirin En buyuk elemani: %d",i+1,maks);

                    i++;
         }





    return 0;
}
