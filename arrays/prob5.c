#include<stdio.h>
int main()
{
	int a[5],i=0;
	while(i<5)
	a[i]=++i;//starts from a[0] , as the exp to the eight is evaluated at first
	for(i=0;i<5;i++)
	printf("%d ",a[i]);
}
//garbage 1 2 3 4
