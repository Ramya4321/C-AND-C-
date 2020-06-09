#include<iostream>
using namespace std;
class A
{
public:
   virtual void display()
    {
        cout<<"i am from A\n";
    }
};
class B:public A
{
    public:
        void display()
        {
             cout<<"i am from B\n";
        }
};
int main()
{
A *a;  //declaring pointer object will not call constructor
B b;
a=&b;	
a->display();//even when the address is passed, it still shows A
}
/*
i am from B

*/
