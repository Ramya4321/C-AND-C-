#include<stdio.h>
#include<stdlib.h>//for File
int main()
{
	FILE *f1,*f2;
	f1=fopen("a.txt","w");
	f2=fopen("b.txt","w");
	fclose(f1,f2); //error
}

