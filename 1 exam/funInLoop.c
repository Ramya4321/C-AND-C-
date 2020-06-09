#include<stdio.h>
int fun()
{
	static int num=16;
	return num--;
}
int main()
{
	for(fun();fun();fun())
	printf("%d ",fun());
}
//14 11 8 5 2
