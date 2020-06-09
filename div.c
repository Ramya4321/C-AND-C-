#include <stdio.h>
#include <stdlib.h>
int main ()
{
   div_t output;
   output = div(27, 4);
   printf("Quotient part of (27/ 4) = %d\n", output.quot);
   printf("Remainder part of (27/4) = %d\n", output.rem);
}
