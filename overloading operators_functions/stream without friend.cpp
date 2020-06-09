//not working
#include <iostream>
using namespace std;
struct Currency
{
  int Dollar;
  int Cents;

  ostream& operator<< (ostream &out)
  {
    out << "(" << Dollar << ", " << Cents << ")";
    return out;
  }
};
template<typename T>
void DisplayValue(T tValue)  
{
   cout<<tValue<<endl;
}

int main() 
{
Currency c;
c.Dollar = 10;
c.Cents = 54;
DisplayValue(20); // <int>
DisplayValue("This is text"); // <const char*>
DisplayValue(20.4 * 3.14); // <double>
DisplayValue(c); // Works. compiler will be happy now. 
return 0;
}

