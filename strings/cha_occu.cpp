#include<iostream>
using namespace std;
int main()
/*{
	char s[20];
	char temp;
  int j,i,count=0;
  cout<<"enter a string\n";
  cin.getline(s,100);
  for(i=0;s[i]!='\0';i++)
  {
  	if(s[i]!=' ')
  	{
  	temp=s[i];
  	s[i]=' ';
  	//count=0;
  	count=1;//keep j=i+1;
  	for(j=0;s[j]!='\0';j++)
  	{
  		if(temp==s[j])	
  		{
			count++; 
			s[j]=' ';
		}
	
	}
	
	cout<<temp<<" occured for "<<count<<" times\n";
	}
  }
}
*/
{
	string s;
	int count[20]={0};
	cout<<"enter a string\n";
    getline(cin,s);
    for (int i = 0; s[i]; i++)  
        (count[s[i]])++;
	for (int i = 0; s[i]; i++)  
  	cout<<"count of"<<s[i]<<"="<<count[s[i]]<<endl;  
}
