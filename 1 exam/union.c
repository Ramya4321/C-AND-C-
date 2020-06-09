#include<stdio.h>
int main()
{
	union demo
	{
		int a,b;
	};
	union demo d;
	d.a = 100;
	d.b=10;
	printf("%d",d.a);
}
//10
