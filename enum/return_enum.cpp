#include <stdio.h> 
enum State {WORKING = 0, FAILED, FREEZED}; 
enum State currState = 2; 
  
enum State FindState() { 
    return currState; 
} 
  
int main() { 
   (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING"); 
   return 0; 
} 
//	[Error] invalid conversion from 'int' to 'State' [-fpermissive]
