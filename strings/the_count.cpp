#include<iostream>
using namespace std;
int main()
{
  char s[200];
  int j,i,l=0;
  int count=0;
  cout<<"enter a string\n";
  cin.getline(s,200); 
  for(i=0;s[i]!='\0';i++)
  {
  if(s[i]=' '&& s[i+1]=='t' && s[i+2]=='h' && s[i+3]=='e' && (s[i+4]==' '||s[i+4]=='\0'))
  	count++;
  }
  cout<<"the appeared ="<<count<<"times";
}
