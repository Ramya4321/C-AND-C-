#include<iostream>
using namespace std;
class fibonacii
{
	int fib1,fib2,fib3,i,n;
	public:
		fibonacii()
		{
			fib1=0;fib2=1;
		}
		fibonacii(fibonacii &f)
		{
			n=10;
			cout<<f.fib1<<endl<<f.fib2<<endl;
			for(i=0;i<n-2;i++)
			{
				fib3=f.fib1+f.fib2;
				cout<<fib3<<endl;
				f.fib1=f.fib2;
				f.fib2=fib3;
			}
		}
};
int main()
{
	fibonacii f1;
	fibonacii f2(f1);
}

