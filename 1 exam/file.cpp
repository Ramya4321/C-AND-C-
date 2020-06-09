#include<iostream>
#include<fstream>
using namespace std;//for File
int main()
{
	File *f1,*f2;
	f1.open("a.txt","w");
	f2.open("b.txt","w");
	fclose(f1,f2);
}
//mixing both c,c ++ 
//error
