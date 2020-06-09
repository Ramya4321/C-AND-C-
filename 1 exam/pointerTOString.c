#include<stdio.h>
int main()
{
	char c[] = "LBCE2020";
	char *p = c;
	printf("%s",p+p[3]-p[1]);//E2020
}
