//if we want to search file should know what is emono and name and number os bytes it has occupied
//we cannot access private variaables evrn with objest in main
//we have to write a function
#include<iostream>
#include<fstream>
using namespace std;
class employee
{
    private:
    int empno;
    char empname[10];
    public:
        void search()
        {
             int flag=0;
             ifstream r;
             employee e;
             r.open("student.txt");
              r.read((char*)&e,sizeof(e));
              int id;
              cout<<"enter id  ";
              cin>>id;
              while(!r.eof())
              {
              if(id==empno)
               {
              cout<<e.empno<<" \n"<<empname;//e or e.
              flag=1;
              break;
               }
              r.read((char*)&e,sizeof(e));
        }
    if(flag==0)
    cout<<"detailes not found"<<endl;
    }
  
};
int main()
{
   employee e1;
   e1.search();
}
