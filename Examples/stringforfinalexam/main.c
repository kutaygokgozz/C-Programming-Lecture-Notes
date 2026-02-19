#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main()
{
    printf("enter a sentence: \n");
 char arr[100];
  gets(arr);
  int i,numdigit=0,numword=1,numletter=0;

  while(arr[i]!=NULL)
  {
      if(isdigit(arr[i])) numdigit++;
      if(isalpha(arr[i])) numletter++;
      if(isspace(arr[i])) numword++;



      i++;
  }

  printf("letter: %d\ndigit: %d\nword: %d",numletter,numdigit,numword);

    return 0;
}
