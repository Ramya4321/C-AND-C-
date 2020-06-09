#include<iostream>
using namespace std;
#include<fstream>
class employee
{
	int no;
	string name;
	public:
	void enter();//take the input first, then it will work
	void search();
};
void employee::search()
{
	int id,temp=0;
	employee e;//object created for read function
	ifstream file;
	file.open("emp.txt");
	if(!file)
	{
		cout<<"no file";
		return ;
	}
	file.read((char *)&e, sizeof(e));
	cout<<"enter id to search :";
	cin>>id;
	while(!file.eof())
	{
		if(e.no==id)
		{
			cout<<"details :"<<endl;
			cout<<name<<" "<<no;
			temp=1;
			break;
		}
		file.read((char *)&e, sizeof(e));
	}
	if(temp==0)
	cout<<"record not found"<<endl;
}
int main()
{
	employee e1;
	e1.search();
}
