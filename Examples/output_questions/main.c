#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[]={1,2,3,4,5};
    int *p=nums;
    int i;
    for(i=0;i<3;i++)
    {
        (*p)++;
        ++p;
    }
    printf("%d %d %d",nums[0],nums[1],nums[2]);

}
