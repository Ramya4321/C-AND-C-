/*
Given an integer N and a pizza which can be cut into pieces, 
each cut should be a straight line going from the center of the pizza to its border.
Also, the angle between any two cuts must be a positive integer.
Two pieces are equal if their appropriate angles are equal.

The given pizza can be cut in following three ways:
Cut the pizza into N equal pieces.
Cut the pizza into N pieces of any size.
Cut the pizza into N pieces such that no two of them are equal.
The task is to find if it is possible to cut the pizza in the above ways for a given value of N.
Print 1 if possible else 0 for all the cases i.e. print 111 if all the cases are possible.
*/
#include <iostream> 
using namespace std;  
void cutPizza(int n) 
{ 
    cout << (360 % n == 0) ? "1" : "0";  
    cout << (n <= 360) ? "1" : "0"; 
    cout << (((n * (n + 1)) / 2) <= 360) ? "1" : "0"; 
} 
int main() 
{ 
    int n = 7; 
    cutPizza(n); 
    return 0; 
} 
