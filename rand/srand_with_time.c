#include <stdio.h> 
#include <stdlib.h> 
#include<time.h> 
int main(void) 
{ 
    int i;
	// Use current time as seed for random generator 
    srand(time(0)); 
    for(i = 0; i<5; i++) 
        printf(" %d ", rand()); 
    return 0; 
} 

