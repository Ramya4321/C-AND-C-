#include<iostream>
using namespace std;
int main()
{
	char s1[10],c;
	int i,len=0,count=0;
	cout<<"enter the string";
	cin>>s1;
	for(i=0;s1[i]!='\0';i++)
	{
		len++;
	}
	cout<<"length of the string is "<<len<<endl;
	cout<<"enter the character"<<endl;
	cin>>c;
	for(i=0;i<len;i++)
	{
		if(s1[i]==c)
		{
			count++;
		}
	}
	cout<<"frequency of the character is "<<count;
}
