//#include <bits/stdc++.h>
#include<iostream>
#include<cstdlib> 
using namespace std; 
int divide(int dividend, int divisor) 
{  
  int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;//^means anyonne but not both
  dividend = abs(dividend); //abs gives abslout value of integer
  divisor = abs(divisor);  
  int quotient = 0; 
  while (dividend >= divisor) 
  { 
    dividend -= divisor; 
    ++quotient; 
  } 
  return sign*quotient; 
} 
int main()
{ 
  int a,b;
  cout<<"enter a and b\n";
  cin>>a>>b;
  cout << divide(a, b); 
  return 0; 
} 
