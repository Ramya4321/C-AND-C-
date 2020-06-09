#include<stdio.h>
int f(int x, int *py, int **ppz)
{
	int y,z;
	**ppz +=1;
	z= **ppz;
	printf("%d ",z);//5
	*py+= 2;
	y= *py;
		printf("%d ",y);//7
	x+=3;//x value is not c, so x will be 4
		printf("%d ",x);//7  
	return x+y+z;
}
int main()
{
	int c, *b ,**a;
	c=4;
	b=&c;
	a=&b;
	printf("%d",f(c,b,a));
	getchar();//19
	
}
