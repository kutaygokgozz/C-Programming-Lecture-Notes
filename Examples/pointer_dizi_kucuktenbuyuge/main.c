#include <stdio.h>
#include <stdlib.h>

sortnumber(int *p,int len);

int main()
{
    int arr[]={3,9,7,2,15,11};
    int x=sizeof(arr)/sizeof(arr[0]);
    sortnumber(arr,x);
    for(int i=0;i<6;i++)
    {printf(" %d",arr[i]);}


    return 0;
}
sortnumber(int *p,int len)
{
    int k,n,res;
    for(k=0;k<len;k++)
    {
        for(n=0;n<len;n++)
        {
            if(*(p+k)<*(p+n))
            {
                res=*(p+k);
                *(p+k)=*(p+n);
                *(p+n)=res;
            }
        }
    }
}
