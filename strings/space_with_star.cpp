#include<iostream>
using namespace std;
//#include<string.h>
int main()
{
	char a[20];
	//0int n;
	//cout<<"enter length of string";
	//cin>>n;
	cout<<"enter string\n";
	cin.getline(a,20);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		a[i]='*';
	}
	cout<<"the string is\n";
	cout<<a;
	
}

