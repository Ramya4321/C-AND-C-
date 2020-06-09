#include<stdio.h>
int main()
{
	int i=1;
	while(i++<=5)
	printf("%d ",i++);//2 4 6    //after printing value increases
	printf("\n");
	
	int j=1;
	while(++j<=5)
	printf("%d ",++j);//3 5
	printf("\n");
	
	int k=1;
	while(++k<=5)
	printf("%d ",k++);//2 4
	printf("\n");
	
	int l=1;
	while(l++<=5)
	printf("%d ",l++);//2 4 6
	printf("\n");
	
	int m=5,n=5;
	++m;
	n++;
	printf("%d ",m);//6
	printf("%d",n);//6
	printf("\n");

	int a=10,b=100;
	float c=10.5,d=100.5;
	++a;--b;++c;--d;
	printf("%d %d %f %f",a,b,c,d);//11 99 11.500000 99.500000
	printf("\n");
	
	int x=10;
	printf("\n %d %d %d",x,x++,++x);//12 11 12
	//doubt??????????????//brainly//stackoverflow
}
