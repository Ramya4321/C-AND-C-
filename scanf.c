
// C/C++ program to demonstrate return value 
// of printf() 
  
#include <stdio.h> 
int main() 
{ 
    char a[100], b[100], c[100]; 
    printf("\n First scanf() returns : %d", scanf("%s", a)); 
    printf("\n Second scanf() returns : %d", scanf("%s%s", a, b)); 
} 
/*
hey
 First scanf() returns : 1
are you insame // takes only two inputs
 Second scanf() returns : 2
*/
