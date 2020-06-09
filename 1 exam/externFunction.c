#include<stdio.h>
#include<stdlib.h>
extern int func(int x, int y)
{
		 return x*y;
}
int main
{
	printf("%d",func(5,6));
}

