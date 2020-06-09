#include<iostream>
using namespace std;
int main()
{
	string str;
	int i,j;
	cout<<"enter string\n";
	getline(cin,str);
	int len=str.length();
	for(i=len;i>=0;i--)
	{
		if(str[i]==' ' || i==0)
		{
			j=i;
			while(i+1<=len)
			{
				cout<<str[i];
				i++;
			}
			cout<<" ";
			len=j;
		}
	
	
	}
}
