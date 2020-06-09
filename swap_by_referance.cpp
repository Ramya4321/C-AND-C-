/*
ILS 2:  Cyclic Order (ILS2-4892)
Question:Ask user to enter 3 integer numbers of his choice for swapping. 
Take the values entered by user and using address location swap the values and display back the swapped elements.
Test Cases: 
Input Text:
10
20
30
Output Text:
30 
10
20

*/
#include<iostream>
using namespace std;
int swap(int &x,int &y,int &z);
int main()
{
 int a,b,c;
 cout<<"enter three numbers";
 cin>>a>>b>>c;
 cout<<"before swapping";
 cout<<a<<endl<<b<<endl<<c<<endl;
 swap(a,b,c);
 cout<<"after swapping";
cout<<a<<endl<<b<<endl<<c<<endl;
}
int swap(int &x,int &y,int &z)
{
 int temp;
 temp=z;
 z=x; 
 x=y;
 y=temp;
}
/*
out put:
enter three numbers23 21 34
before swapping23
21
34
after swapping21
34
23
*/
