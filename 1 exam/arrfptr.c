#include<stdio.h>
int main()
{
	typedef char (*(*arrfptr[3])())[10];
	arrfptr x;
	printf("%s",x);
}
