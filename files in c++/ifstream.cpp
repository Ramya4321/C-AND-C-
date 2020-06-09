#include<iostream>
using namespace std;
#include<fstream>
class stu
{
	int id;
	char name[20];
	public:
		void putstu()
		{
			cout<<id<<name<<endl;
		}
};
int main()
{
	stu s;
	ifstream file;////////
	file.open("student.txt");
	file.read((char*)&s,sizeof(s));
	while(!file.eof())
	{
		s.putstu();
		file.read((char*)&s,sizeof(s));
	}
	file.close();
}
