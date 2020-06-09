#include<iostream>
using namespace std;
class AA
{
    int id;
    string name;
    public:
        void getA(int id,string name)
        {
            this->id=id;
            this->name=name;
        }
        void display()
        {
            cout<<"id="<<id;
            cout<<endl<<"name="<<name;
        }
        
};
int main()
{
    AA a;
    a.getA(92,"ramya");
    a.display();
    a.getA(93,"SIPPI");
    a.display();
}
