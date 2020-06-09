/*
Remove duplicates from sorted array  
Given a sorted array, the task is to remove the duplicate elements from the array.
Remove duplicates from sorted array
Examples:
Input  : arr[] = {4, 4, 4, 4, 4}
Output : arr[] = {4}
         new size = 1
*/
//we can also keep ++k 
#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,a[30];
	cout<<"How many elements\t";
	cin>>n;
	cout<<"Enter elements of array\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
					a[k]=a[k+1];
					n--;
			}
		else
				j++;
		}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"new size="<<n;
 	return 0;
}
