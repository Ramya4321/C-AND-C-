#include <iostream> 
#include<cstdlib>
#include<typeinfo>
using namespace std;  
template <typename T> 
class test
{
	T a,b;
	public: 
	test();
	void Tget()
	{
		cin>>a>>b;
	}
	T product()
	{
		cout<<a*b<<endl;
	}
	T sum();
};
template <typename T> //necessary
test<T>::test()
{
	cout<<"enter two numbers of type"<<typeid(T).name()<<endl;
}
template <class T>
T test<T>::sum()
{
	return a+b;
}
int main()
{
	test<int> obj1;
	obj1.Tget();
	obj1.product();
	cout<<obj1.sum();
	test<float> obj2;
	obj2.Tget();
	obj2.product();
	cout<<obj2.sum();	
}
