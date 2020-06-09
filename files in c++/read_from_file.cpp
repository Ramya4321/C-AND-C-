#include<fstream>
#include<iostream>
using namespace std;
class stu
{
    int id;
    char sname[20];
    public:
        void putstu()
        {
            cout<<id<<sname;
        }
};
int main()
{
    stu s;
    ifstream r;
    r.open("student.txt");
    while(!r.eof())
    {
    r.read((char*)&s,sizeof(s));//sent from file to object
    s.putstu();
}
}

