#include<stdio.h>
int main()
{
	int a,b,c;
	int arr[5]={1,2,3,25,7};
	a=++arr[1];//a=3 , arr[1]=3
	b=arr[1]++;//arr[1]=4 b=3
	c=arr[a++];//a=4 arr[3]=25
	printf("%d--%d--%d",a,b,c);
	return 0;
}
//4--3--25
