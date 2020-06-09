#include<iostream>
using namespace std;
int divideString(string str, int);
int main()
{  
    string s;
    int n;
	cout<<"enter string\n";
    //getline(cin,s);
	cin>>s;
	cout<<"enter number of parts\t";
	cin>>n;
    divideString(s,n); 
    return 0; 
} 
int divideString(string str, int n) 
{ 
    int len=0;
	for(int i=0;str[i]!='\0';i++)
	len++; 
    int i; 
    int part_size; 
    if (len % n != 0) 
    { 
        cout<<"Invalid Input: String size is not divisible by n"; 
        return 0; 
    } 
    part_size = len / n; 
    for (i = 0; i< len; i++) 
    { 
        if (i % part_size == 0)   //x%x
        cout<<endl;
        cout<< str[i]; 
    } 
} 
