/*

ILS 3:  Marks Calculation (ILS3-4892)
Question:Create a class 'Student', declare three public data members 'm1','m2' and 'avg'. Define two functions 'get' and 'show'. 
Enter the input marks of the student in the 'get' function and display the marks entered by the student in 'show' function. 
Write a function 'average' outside the class where you can calculate the average of the marks and pass the object of the class 'Student' 
as a parameter to the function 'average'. The data members can be accessed by the object passed in the parameter to the function. 
In main function, create the object of class Student and call the functions 'get', 'show' using the object and while calling 
'average' function pass object of class 'Student' as parameter. Display the average of marks in the function.
Test Cases: 
Input Text:
50
40
Output Text:
50
40
45
*/
#include<iostream>
using namespace std;
class student
{
 public:
 int m1,m2;
 float avg;
 void get();
 void show();
};
void student::get()
{
 cout<<"enter two subjects marks";
 cin>>m1>>m2;
}
//student::void show()//void return type befroe class
void student::show()
{
 cout<<"first subject marks"<<m1<<endl;
 cout<<"second subject marks"<<m2<<endl;
}
void average(student s)
{
s.avg=s.m1+s.m2;
s.avg=s.avg/2;
cout<<"average ="<<s.avg;
}
int main()
{
 student s;
 s.get();
 s.show();
 average(s);
}
