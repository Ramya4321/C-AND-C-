#include<stdio.h>
int main()
{
	int arr[10]={1,3,5,6,2};
	printf("%d",arr[5]);//0
	int a[10];
//	a=arr;     //array
//	printf("%d",a);
	//You can't say b=a because the name of an array
	// is the address of element 0. The compiler will
	// not let you chnage the address of a local variable.
	// You will need to copy one array to the other element
	// by element
	return 0;
}
