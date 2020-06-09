#include<stdio.h>
int main()
{
	int z[4]={5,1,32,4};
	int k,l,m;
	k=++z[l];
	l=z[l]++;
	m=z[k++];
	printf("%d %d %d\n\n\n",k,l,m);
	
	int a=1;
	int b=4;
	int c;
	int d,e,f,g,h,i,j;
	c=++a + b++;
	h=++a + ++b;
	e=++a + b;
	f=a++ + b++;
	d=a++ + b;
	g=a++ + ++b;
	i=a + ++b;
	j= a + b++;
	printf("++a + b++ = %d\n",c);
	printf("++a + ++b = %d\n",h);
	printf("++a + b = %d\n",e);
	printf("a++ + b++ = %d\n",f);
	printf("a++ + b = %d\n",d);
	printf("a++ + ++b = %d\n",g);
	printf("a + ++b = %d\n",g);
	printf("a + b++ = %d\n",g);
	return 0;
}
