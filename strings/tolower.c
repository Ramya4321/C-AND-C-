#include <ctype.h> 
#include <stdio.h> 
int main() 
{ 
    int j = 0; 
    char str[] = "GEEKSFORGEEKS\n"; 
    char ch; 
    while (str[j]) 
	{ 
        ch = str[j];
        putchar(tolower(ch)); 
        j++; 
    } 
    return 0; 
} 
