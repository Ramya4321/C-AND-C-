/*11)A. Write a program to define the function template for
swapping two items of the various data types such as
integer, float, and characters.*/
#include<iostream>
using namespace std;
template<class t>
t swap(t a,t b)
{
	t c;
	c=a;
	a=b;
	b=c;
	cout<<"a= "<<a;
	cout<<"b= "<<b;
}
//template<class t>
int main()
{
	
	swap('c','d');
	cout<<endl;
	swap(4,5);
	cout<<endl;
	swap(4.5,6.7);
	cout<<endl;
}
