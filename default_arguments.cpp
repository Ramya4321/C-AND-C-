#include<iostream>
using namespace std;
double p(double a,double b, double c=0, double d=0)
{
	return a+b+c+d;
}
int main()
{
	double x=5.5;
	cout<<p(x,7);
	cout<<p(x,7.6);
	cout<<p(x,4.4,5.5);	
}
