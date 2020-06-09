#include<iostream>
using namespace std;
class overl
{
    int a,b;
    public:
        overl(int a,int b)
        {
           (*this).a=a;
            (*this).b=b;
        }
        display()
        {
            cout<<"a="<<putchar(a);
            cout<<"b="<<putchar(b);
        }
        int  operator [](int x)
        {
            if(x==0)
            return a;
            if(x==1)
            cout<<' '<<b;           
        }
};
int main()
{
    overl l1(5,4);
    l1.display();
    cout<<"\n"<<l1[0];
    l1[1];
}
