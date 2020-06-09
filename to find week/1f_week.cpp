//week if a particular day
#include<iostream>
using namespace std;
int c(int);
enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
    enum week day;
	int century,year,date;
	int month;
	cout<<"enter date\t";
	cin>>date;
	cout<<"enter month\t";
	cin>>month;
	cout<<"enter year\t";
	cin>>year;
	century=c(year);
	day=(date+(2.6*month-0.2)-(2*century)+year+(year/4)+(century/4))%7);
	cout<<"day of the week="<<day;
}
int c(int year)
{
	 if (year <= 0) 
	 return 0;
       // cout << "0 and negative is not allow"
            // << "for a year";
    else if (year <= 100) 
        return 1; 
  
    else if (year % 100 == 0) 
        return year/100; 
    else
        return year/ 100 + 1;      
} 

