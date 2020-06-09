#include<stdio.h>
#include<stdlib.h>
//#define R [10]
//#define c [20]// exam
#define R 10
#define c 20
int main()
{
	int (*p)[R][c];
	printf("%d",sizeof(*p)); // 800
	return 0;
}
/*
800
200
400
4
*/
