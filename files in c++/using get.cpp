#include<iostream>
using namespace std;
#include<fstream>
int main()
{
	char ch;
	ofstream file;
	file.open("stu.txt");
	cout<<"enter any text at last put .\n";
	do
	{
	ch=getchar();
	file.put(ch);	
	}while(ch!='.');
	cout<<"file created successfuly\n";
	file.close();
	ifstream fp;
	fp.open("stu.txt");
	cout<<"data is stored in the file";
	while(!fp.eof())
	{
	fp.get(ch);
	cout<<ch;//put wont work 
	
	}
	fp.close();
}
