/*AIM: To write a program to read a set of lines from keyboard and to
 store it on a specific file.*/
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
	string a;
	fstream s;//or ofstream
	s.open("ex1.txt");
	cout<<"enter any stirng\n";
	cin>>a;
	s<<a;
	cout<<"the file is created"<<endl;
	s.close();
}
/*
ramya
*/
