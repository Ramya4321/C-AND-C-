#include <stdio.h>
int main()
{
   char ch;
   printf("Enter any character\n");
   scanf("%c", &ch);
   if ( isdigit ( ch ) )
      printf ( "\nEntered character is alphabetic" ) ;
   else
      printf ( "\nEntered character is not alphabetic" ) ;
}
