#include<iostream>
using namespace std;
class Test2;
class Test1
{
	int a;
	public:
		void geta()
		{
			cout<<"enter a ";
				cin>>a;
		}
		friend void max(Test1 t1,Test2 t2);
};
class Test2
{
	int b;
	public:
		void getb()
		{
			cout<<"enter b ";
				cin>>b;
		}
		friend void max(Test1 t1,Test2 t2);
	
};
void max(Test1 t1,Test2 t2)
{
	cout<<"max num is "<<(t1.a>t2.b?t1.a:t2.b);
}
int main()
{
	Test1 t1;
	Test2 t2;
	t1.geta();
	t2.getb();
	max(t1,t2);//no need object to call
}
