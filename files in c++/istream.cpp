#include<fstream>
#include<iostream>
using namespace std;
class stu
{
	int id;
	char name[20];
	public:
		void getstu()
		{
			cin>>id>>name;
		}
};
int main()
{
	stu s;
	ofstream file;
	file.open("student.txt");
	char op;
	do
	{
		s.getstu();
		file.write((char*)&s,sizeof(s));
		cout<<"row created"<<endl;
		cout<<"enter  y or n to continue"<<endl;
		cin>>op;
	}while(op=='y');
	file.close();
}
