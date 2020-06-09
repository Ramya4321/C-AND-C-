//ONLY for one missing number start from 1
#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,total,number;
	cout<<"enter the size of array=";
	cin>>n;
	cout<<"enter the elements of array=";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	total=(n+1)*(n+2)/2;
	for(i=0;i<n;i++)
	{
	total=total-a[i];
	}
	cout<<"missing number="<<total;
}
