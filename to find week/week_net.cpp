#include<iostream>
using namespace std;
int dow(int y, int m, int d)
{
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;cout<<endl<<t;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
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
	int result=	dow(year,month,date);
	switch(result)
	{
		case 7:cout<<"sunday";
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
	}
}
