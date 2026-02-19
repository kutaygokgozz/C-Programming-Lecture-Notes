#include <stdio.h>
#include <stdlib.h>
int x,i,sum=0;
void cube()
{scanf("%d",&x);
     while(x>0)
          {
           i=x%10;

           i=i*i*i;

           sum=i+sum;
            x=x/10;
          }



}
int main()
{
     cube();
    printf("%d",sum);
    return 0;
}
