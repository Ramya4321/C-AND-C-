#include <iostream> 
using namespace std;   
template <typename t1, class t2> //< class T>
double sum(t1 x, t2 y) 
{ 
   return x+y; 
} 
int main() 
{ 
  cout << sum(4,5.7) << endl;  // Call myMax for int 
  cout << sum(3.0, 7.0) << endl; // call myMax for double 
  cout <<  sum(2.2222,8.7777)<< endl;   // call myMax for char 
  return 0; 
}
/*
9.7
10
10.9999

*/
