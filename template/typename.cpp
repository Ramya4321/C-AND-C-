
#include <iostream> 
using namespace std;   
// One function works for all data types.  This would work 
// even for user defined types if operator '>' is overloaded 
template <typename T> //< class T>
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 
int main() 
{ 
  cout << myMax(3, 7) << endl;  // no nedd of giving data type
  cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double 
  cout << myMax<char>('g', 'e') << endl;   // call myMax for char 
  return 0; 
}

