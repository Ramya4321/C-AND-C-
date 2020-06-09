#include<iostream>
using namespace std;
int main()
{
  char s[20];
  int j,i;
  cout<<"enter a string\n";
  cin>>s;
  //if(s>=65&&s<=90 || s>=97 && s<=122)
  for(i=0;s[i]!='\0';i++)
  {
  while(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z')
  {
  	for(j=i;s[j]!='\0';j++)
  	s[j]=s[j+1];
  	s[j]='\0';
  }
  }
  cout<<"string is\t"<<s;
}
