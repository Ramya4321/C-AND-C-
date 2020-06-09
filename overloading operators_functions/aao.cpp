//arithmetic assignment operator
#include<iostream>
using namespace std;
class num
{
    int x,y;
    public:
        num(int a,int b)
        {
            x=a;
            y=b;
        }
        num operator +=(num &r)
        {
           // num temp;
           x=x+r.x;//we are adding to x only so no need new object
           y=y+r.y;
          // return temp;
        }
        void display()
        {
            cout<<x<<endl<<y;
        }
};
int main()
{
    num a(1,2),b(1,2);
    a+=b;
    a.display();
}
