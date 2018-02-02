#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main ( int argc , char* argv[])

char* s = "CPROGRAMMING";
int i;
boolean flag = true;
for(i=0; , i< strlen(s) && flag == true; i++ )
{
   if( isalpha(s[i]) isupper(s[i]) )
     flag = true;
   else
     flag = false;
}
if (flag)
     printf("A string contains only uppercase and alphabet letters\n" );
r
}
