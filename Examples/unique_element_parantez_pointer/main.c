#include <stdio.h>
#include <stdlib.h>
void uniqueelement(char (*)[]);
int main()
{
    char arr[][9]={"emre","kutay","turkaayy","enes"};
    uniqueelement(arr);
    //for(int i=0;i<4;i++)
    //{printf("%s\n",arr[i]);}
    return 0;
}
void uniqueelement(char (*p)[9])
{
    int i=0,j=0,n,len;
    char res;
    for(i=0;i<4;i++)
    { len=strlen(*(p+i));
        for(j=0;j<len;j++)
        {
            for(n=0;n<len;n++)
            {
                if(*(*(p+i)+j)<*(*(p+i)+n))
                {
                    res=*(*(p+i)+j);
                    *(*(p+i)+j)=*(*(p+i)+n);
                    *(*(p+i)+n)=res;



                }

            }

        }  for(j=0;j<len;j++){
       if ((j==0||p[i][j]!=p[i][j-1])&&(j==len-1||p[i][j]!=p[i][j+1]))
       // if(*(*(p+i)+j)!=*(*(p+i)+j+1))
          {
            printf("%c",*(*(p+i)+j));

          }


                            }
                            printf("\n");
   }
}

