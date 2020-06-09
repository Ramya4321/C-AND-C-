//type cast from operator overloading
//typecast not an operator
//int float are not functions or not operators
//they are predefined variables
#include<iostream>
using namespace std;
class data
{
    int x;
    float f;
    public:
        data()
        {
            x=0;
            f=0;
        }
        operator int()
        {
            return x;
        }
        operator float()
        {
            return f;
        }
        data(float m)
        {
            x=2;
            f=m;
        }
        void show()
        {
            cout<<"x="<<x<<"\n"<<"f="<<f;
        }
};
int main()
{
      /*  int i;
        float f;
        data d;
        d=5.5;
        i=d;
        f=d;
        cout<<i<<endl<<f;
        */
        data d;
        double f;
        float i;
        f=55555.638765;
        i=5.5;
        f=float(f);
        i=int(i);
        cout<<i<<endl<<f;
}
