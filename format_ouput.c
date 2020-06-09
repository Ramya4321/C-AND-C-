/*
#include<stdio.h>

main()
{
	int Fahrenheit;

	for (Fahrenheit = 0; Fahrenheit <= 300; Fahrenheit = Fahrenheit + 20)
		printf("%3d %06.3f\n", Fahrenheit, (5.0/9.0)*(Fahrenheit-32));
	int x=1;
	printf("%2d",x);
}
*/
#include<stdio.h>
int main()
{
	register int a=5;
	printf("%d",a);
	a=10;
		printf("%d",a);
}
