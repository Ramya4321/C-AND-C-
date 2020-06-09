/*You have given an integer array of size N. Array contains numbers from 1 to N-1
 but a couple of numbers are missing in an array which also contains duplicates.
Write a c++ program to print the missing number from the sequence.
For example, if given array is {1, 1, 2, 3, 5, 5, 7, 9, 9, 9} then it 
has length 10 and contains a number from 1 to 9. 
In this case, missing numbers are 4, 6, and 8.
*/
#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,integer;
	int count[]={0,0,0,0,0,0,0,0,0,0};
	cout<<"enter size of an array\t";
	cin>>n;
	cout<<"enter the array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	//cout<<"the missing numbers are\n";
	integer=a[0];
	count[integer]=0;
while(integer<a[n-1])
{
	for(i=0;i<n;)
		{
			if(a[i]==integer)
			{
			count[integer]++;
			integer++;
			i++;
		    }
		    else if(a[i]<integer)
		    i++;
		    else
		    integer ++;
		}
}
cout<" missing terms=";
for(integer=a[0];integer<a[n-1];integer++)
	if(count[integer]==0)
	{
	cout<<integer;
	}
}
/*
enter size of an array  5
enter the array
1 1 3 4 4
2
*/

