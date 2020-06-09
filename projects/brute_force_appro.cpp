/*
9.Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. 
More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42.
 All numbers at input are integers of one or two digits.
Input					
1
2
88
42
99
output
1
2
88


*/
#include<iostream>
using namespace std;
int main()
{
 int a[20],n,i;
 cout<<"enter how many elements to enter";
 cin>>n;
 cout<<"enter the elements";
 for(i=0;i<n;i++)
 cin>>a[i];
 for(i=0;i<n;i++)
 {
 if(a[i]!=42)
 cout<<a[i]<<endl;
 else
 break;
 }
}
/*
out put:
enter how many elements to enter5 
enter the elements23 32 12 42 56
23
32
12
*/
