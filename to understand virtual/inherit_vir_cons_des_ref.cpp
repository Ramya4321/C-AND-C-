//virtual destructor
#include<iostream>
using namespace std;
class super
{
public:
    super()
    {
        cout<<"i am from super constructor\n";
    }
    ~super()
    {
         cout<<"i am from super destructor\n";
    }
};
class sub:public super
{
    public:
        sub()
        {
             cout<<"i am from sub constructor\n";
        }
        ~sub()
        {
             cout<<"i am from sub desstructor\n";
        }
};
int main()
{
super *s;
sub su;
s=&su;	
};
/*
i am from super constructor
i am from super constructor
i am from sub constructor
i am from sub desstructor
i am from super destructor
i am from super destructor
*/
