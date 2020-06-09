//week if a particular day
#include<iostream>
using namespace std;
#include<cstdlib>
int c(int);
int week(int);
//enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
   // enum week day;
	int century,year,date;
	int day;
	int month;
	cout<<"enter date\t";
	cin>>date;
	cout<<"enter month\t";
	cin>>month;
	cout<<"enter year\t";
	cin>>year;
	century=c(year);
	//day=(int)(date+(2.6*month-0.2)-(2*century)+year+(year/4)+(century/4))%7;
	//day =( date + ((13*month-1)/5)+ date + (date/4) + (century/4) - (2*century)) ;
//	day=abs(day%7);
	//f = k + [(13*m-1)/5] + D + [D/4] + [C/4] - 2*C.
	week(day);
//	cout<<"day of the week="<<day;
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
int week(int day)
{
	switch(day)
	{
		case 1:cout<<"sunday";
			break;
		case 2:cout<<"monday";
			break;
		case 3:cout<<"tuesday";
			break;
		case 4:cout<<"wednesday";
			break;
		case 5:cout<<"thursday";
			break;
		case 6:cout<<"friday";
			break;
		case 7:cout<<"saturday";
			break;
	}
}
