#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fl;
    fl=fopen("C:\\Users\\Kutay\\Desktop\\binary_dosya.txt","r");
    int bin,pw=1,dec=0;
    while(fscanf(fl,"%d",&bin)==1) //buraya ==1 koymak zorundasin cunku eger koymassan fscanf EOF dondurdugunde de while calisir. cunku while -1 ile de calisir.
    {                                // ve sonsuz donguye girer.
        while(bin!=0)
        {dec=(dec+(bin%10)*pw);
        pw*=2;
        bin/=10;
        }
    printf("%d\n",dec); dec=0; pw=1;
    }
    return 0;
}


/* dosya icerigi :
1111
0011
1001
0110
seklinde alt alta binary sayilar.*/
