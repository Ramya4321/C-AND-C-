#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char name[20];
	int id;
	ofstream out;
	out.open("s.txt");
	cout<<"enter name:";
	out<<name;//write to file
	
	cout<<"enter id:";cout<<endl;
	cin>>name;
	out<<name;
	
	out.close();
	
	ifstream in;
	in.open("s.txt");
	in>>name;//read name
	cout<<name;
	in>>name;
	cout<<name;
	
	in.close();
}
