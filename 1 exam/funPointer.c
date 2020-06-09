#include<stdio.h>
int main()
{
	void first();
	void (*fun)();
	fun=first;
	(*fun)();
	fun();
	return 0;
}
void first()
{
	printf("hello");
}
//hellohello
//geeksforgeeks.org/function-pointer-in-c/
