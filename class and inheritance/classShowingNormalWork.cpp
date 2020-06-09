/*
10)A. Create a base class basic_info with data members
name ,rollno, gender and two member functions getdata
and display. Derive a class physical fit from basic_info
which has data members height and weight and member
functions getdata and display. Display all the information
using object of derived class
*/
#include<iostream>
using namespace std;
class basic_info
{
	string name;
	int rollno;
	char gender;
	public:
		void getdata()
		{
			cout<<"enter name:";
			cin>>name;
			cout<<"enter roll no:";
			cin>>rollno;
			cout<<"enter gender(m/f):";
			cin>>gender;
		}
		void display()
		{
			cout<<"name:"<<name;
			cout<<"roll no:"<<rollno;
			cout<<"gender:"<<gender;
		}
};
class physical_fit:public basic_info
{
	int height,weight;
	public:
		void gdata()
		{
			cout<<"enter height ";
			cin>>height;
			cout<<"enter weight ";
			cin>>weight;
		}
		void dpaly()
		{
			cout<<"height "<<height;
			cout<<"weight "<<weight;	
		}
};
int main()
{
	physical_fit p;
	p.getdata();
	p.gdata();
	p.display();
	p.dpaly();
	}

