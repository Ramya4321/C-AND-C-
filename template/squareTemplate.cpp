/*11 B. Write a program to define the class template for
calculating the square of given numbers with different
data types.*/
#include<iostream>
using namespace std;
template<class t>
class square
{
	t a;
	public:
		sget()
		{
			cout<<"enter a ";
			cin>>a;
		}
		t sq();
};
template<class t>
t square<t>::sq()
{
	return a*a;
}
int main()
{
	square<int>s1;
	square<float>s2;
	square<double>s3;
	cout<<"enter int\n";
	s1.sget();
	cout<<"square ="<<s1.sq();
	cout<<"enter float \n";
	s2.sget();
	cout<<"square ="<<s2.sq();
	s3.sget();
	cout<<"square ="<<s3.sq();
}
