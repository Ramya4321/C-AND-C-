#include<iostream>
using namespace std;
class fraction
{
    int a,b;
    public:
        fraction()
        {
            
        }
    fraction(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    }
    fraction operator +(fraction f)
    {
        fraction temp;
        temp.a=a+f.a;
        temp.b=b+f.b;
        return temp;
    }
    fraction operator -(fraction f)
    {
        fraction temp;
        temp.a=a-f.a;
        temp.b=b-f.b;
        return temp;
    }
    fraction operator *(fraction f)
    {
        fraction temp;
        temp.a=a*f.a;
        temp.b=b*f.b;
        return temp;
    }
    fraction operator /(fraction f)
    {
        fraction temp;
        temp.a=a/f.a;
        temp.b=b/f.b;
        return temp;
    }
};
int main()
{
    fraction f1(10,12),f2(5,6);
    fraction f3;
    f3=f1+f2;
    cout<<"after addition \t"<<endl;
    f3.display();
    f3=f1-f2;
    cout<<"after subtraction \t"<<endl;
    f3.display();
    f3=f1*f2;
    cout<<"after multipication \t"<<endl;
    f3.display();
    f3=f1/f2;
    cout<<"afterr division \t"<<endl;
    f3.display();    
}
