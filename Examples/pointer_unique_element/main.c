#include <stdio.h>
#include <stdlib.h>


void showunique(char *ptr,int len,char *ptr1);
int main()
{
    printf("Bir dizi giriniz: ");
    char arr[100];
    char goal[100];
    scanf("%s",arr);
    int x=strlen(arr);
    showunique(arr,x,goal);
    printf("%s",goal);
    return 0;
}

void showunique(char *ptr,int len,char *ptr1)
{
    int i,j;
    char res;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(ptr[i]<ptr[j])
            {
                res=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=res;
            }
        }
    }
    for(i=0,j=0;i<len;i++)
    {
        if((i==0||ptr[i]!=ptr[i-1])&&(i==len-1||ptr[i]!=ptr[i+1]))
        {

            ptr1[j]=ptr[i];
            j++;
        }
    }
ptr1[j]='\0';  // Burda string in bittigini belirtmek icin null eklemeliyiz.Yoksa kodumuz dogru calimaz.
}
