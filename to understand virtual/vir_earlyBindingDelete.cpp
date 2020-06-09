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
  virtual  ~super()
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
super *s;  //declaring pointer object will not call constructor
sub su;
s=&su;	
delete s;
};
/*
i am from super constructor
i am from sub constructor
i am from sub desstructor
i am from super destructor
*/
