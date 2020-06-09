#include<stdio.h>
int main()
{
	char x=1,y=2;//1 byte = 8 bits
	//x=1 (0000 0001)
	//y=2 (0000 0010)
	//x&y (0000 0000)
	if(x&y)
	printf("1");
	if(x&&y)
	printf("2");
}
//2
