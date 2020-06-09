#include <stdio.h>
#include <string.h>
int main ()
{
  char string[55] ="This is a string for testing";
  char *p;
  p = strchr (string,'i');// p points to the same string
  printf ("Character i is found at position %d\n",p-string+1);
  //bigger position pointer - smaller position pointer
    printf ("Character i is found at position %d\n",string-p+1);
  printf ("First occurrence of character \"i\" in \"%s\" is \"%s\"",string, p);
   return 0;
}
