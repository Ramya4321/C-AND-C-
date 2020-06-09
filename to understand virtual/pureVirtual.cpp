/*10 B. Create a class called LIST with two pure virtual
function store() and retrieve(). To store a value call
store and to retrieve call retrieve function. Derive two
classes stack and queue from it and override store and
retrieve.*/
#include<iostream>
using namespace std;
class list
{
	protected:
		int a;
	public:
		virtual void store()=0;
		virtual void retrive()=0;
		
};
class stack:public list
{
		
		public:
		void store()
		{
		cout<<"enter a ";
		cin>>a;
		}	
		public:
		void retrive()
		{
			cout<<"value="<<a;
		}

};
class queue:public list
{		
		
		public:
		void store()
		{
		cout<<"enter a ";
		cin>>a;
		}	
		public:
		void retrive()
		{
			cout<<"value="<<a;
		}
};
/*int main()
{
stack s;
queue q;
s.store();
s.retrive();
q.store();
q.retrive();

}
*/
int main()
{
	stack *s;
	
}
