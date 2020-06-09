#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample(int a,int b)
		{
			(*this).a = a;
			(*this).b = b;
		}
	sample(sample &old)
	{
		a= old.a;
		b= old.b;
	}
	void print()
	{
		cout<<"a= "<<a<<endl; //10
		cout<<"b= "<<b; //20
	}
};
int main()
{
	sample s1(10,20);
	sample s2(s1);
	s1.print(); // 10 20
	s2.print(); //10 20
}
