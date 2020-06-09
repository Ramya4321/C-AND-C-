//addition of complec numbers using operator overloading +
#include<iostream> 
using namespace std; 
class Complex 
{ 
private: 
    int real, imag; 
public: 
    Complex(int r = 0, int i =0)  
	{
	real = r;   imag = i;
	} 
    // This is automatically called when '+' is used with 
    // between two Complex objects 
    Complex operator + (Complex const &obj) 
	{ 
         Complex res; 
         res.real = real + obj.real; //before operator it knows, after operator we send
         res.imag = imag + obj.imag; 
         //cout<<"real"<<real<<" "<<"img"<<imag<<endl;  10 5
         //cout<<obj.real<<" "<<obj.imag<<endl;       2,4
         return res; 
    } 
    void print() 
	{ 
	cout << real << " + i" << imag << endl; 
	} 
}; 
  
int main() 
{ 
    Complex c1(10, 5), c2(2, 4); 
    Complex c3 = c1 + c2; // An example call to "operator+" 
    c3.print(); 
    Complex c4 = c2 + c3;
    c4.print();
    c4= c1+c3;
    c4.print();
} 
