//week if a particular day
#include<iostream>
#include<cmath>
using namespace std;
int c(int);
int week(int);
int y(int,int);
int m(int);
int main()
{
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
	month=m(month);
	year=y(year,month);
	
	day=(date+(floor(2.6*month-0.2))-(2*century)+year+(floor(year/4))+(floor(century/4)));
	day=day%7;
	cout<<"day of the week="<<day<<endl;
	week(day);
}
int m(int month)
{
	switch(month)
	{
		case 1:return 11;
			break;
		case 2:return 12;
			break;
		case 3:return 1;
			break;
		case 4:return 2;
			break;
		case 5:return 3;
			break;
		case 6:return 4;
			break;
		case 7:return 5;
			break;
		case 8:return 6;
			break;
		case 9:return 7;
			break;
		case 10:return 8;
			break;
		case 11:return 9;
			break;
		case 12:return 10;
			break;
	}
}
int y(int year,int month)
{

	if(month==11 || month==12)
	return (year%100)-1;
	else
	return year%100;
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
		case 0:cout<<"sunday";
			break;
		case 1:cout<<"monday";
			break;
		case 2:cout<<"tuesday";
			break;
		case 3:cout<<"wednesday";
			break;
		case 4:cout<<"thursday";
			break;
		case 5:cout<<"friday";
			break;
		case 6:cout<<"saturday";
			break;
		case -6:cout<<"monday";
			break;
		case -5:cout<<"tuesday";
			break;
		case -4:cout<<"wednesday";
			break;
		case -3:cout<<"thursday";
			break;
		case -2:cout<<"friday";
			break;
		case -1:cout<<"saturday";
			break;
	}
}
