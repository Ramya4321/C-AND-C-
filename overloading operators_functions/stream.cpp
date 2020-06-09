//stream operators//page 64 nites//40 drive
#include<iostream>
using namespace std;
class num
{
    int a,b,c;
    public:
       friend void operator >>(istream &r,num &n)
        {
             cout<<"values=";
            r>>n.a>>n.b>>n.c;  //not working without friend
        } 
       friend  void operator <<(ostream &w,num &n)
        {
              cout<<"values of a b c enter ";
            w<<n.a<<n.b<<n.c;
        }
};
int main ()
{
  num n1;
  cin>>n1;
  cout<<n1;  
}
