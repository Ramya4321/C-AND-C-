//details of class into file  creates the file  file will be deleted if we delete the compiler
#include<fstream>
#include<iostream>
using namespace std;
class stu
    {
        int id;
        char name[20];
        public:
            void getstu()
            {
                cout<<"enter name and id\n";
                cin>>name>>id;
                
            }
    };
int main()
{
     stu s;
     ofstream w;
     w.open("student.txt");
     char op;
     do
     {
          s.getstu();
          w.write((char*)&s,sizeof(s));//sent from object to file
          cout<<"row created\n";
          cout<<"do u want to type again(y/n) ";
          cin>>op;     
     }while(op=='y'||op=='Y');
     w.close();
}

