#include <iostream>
using namespace std;
template<class T>
class A
{
	protected:
		T a;
	public:
		void setA(T);
		T getA();
};

template<class T>
void A<T>::setA(T a)
{
	this->a = a;
}

template<class T>
T A<T>::getA()
{
	return a;
}

template<class T>
class B: public A<T>//---------------------<
{
public:
	T bGetA();
	void bSetA(T);
};

template<class T>
T B<T>::bGetA() 
{
	return this->a;
}

template<class T>
void B<T>::bSetA(T a)
{
	this->a = a;
}

int main()
{
	B<int> b; 
	b.bSetA(1); 
	cout << b.bGetA() << endl;
	cout<<b.getA()<<endl;
	return 0;
}
