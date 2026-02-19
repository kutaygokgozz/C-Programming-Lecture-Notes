#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char *mess[6]={"Don't walk in front of me",
                  "I may not follow",
                  "Don't walk behind me",
                  "11just walk beside me",
                  "And be my friend"};

    int len=0,i=0;

                  while(i<5){len=isalnum(*(*(mess+0)+i))?1:0;i++;}
                  printf("%s\n",*(mess+len));


                  char str[100]={NULL};
                  strncpy(str,*(mess+2),5);
                  strncat(str,*(mess+4)+3,strtol(*(mess+3),NULL,2));
                  puts(str);


    return 0;
}
