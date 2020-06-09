#include<stdio.h>
int main()
{
	int i=8,j=12;
	printf("%d, %d, %d\n",i|j&j|i,i^j,i|j&j|i);
	return 0;
}
//12, 4, 12
