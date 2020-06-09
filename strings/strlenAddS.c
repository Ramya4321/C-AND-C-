#include<stdio.h>
#include<string.h>
int main()
{
	static char s[]= "Hello!";
	printf("%d\n",*(s+strlen(s)));//0
	printf("%d\n",s[6]);//0
}
//0
