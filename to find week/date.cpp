#include<iostream>
using namespace std;
int validdate(int,int,int);
int week(int ,int,int );
int main()
{
	int y,m,d,res,s;
	cout<<"enter date in the format date-month-year";
	cin>>d>>m>>y;
	res=validdate(d,m,y);
	if(res==1)
	{
		s=week(d,m,y);
		if(s==0)
		{
			cout<<"sunday";
		}
		else if(s==1)
		{
			cout<<"monday";
		}
		else if( s==2)
		{
			cout<<"tuesday";
		}
			else if(s==3)
		{
			cout<<"wednesday";
		}
		else if( s==4)
		{
			cout<<"thursday";
		}
			else if(s==5)
		{
			cout<<"friday";
		}
		else if( s==6)
		{
			cout<<"saturday";
		}
	}
	else
	{
		cout<<"not a valid date";
	}
	
	
}
int validdate(int d,int m,int y)
{
	if(y>=1800 && y<=2300)
	{
		if(m>=1 && m<=12)
		{
			if(d>=1 && d<=31)
			{
				if( (d>=1 && d<=30) && (m==4||m==6||m==9||m==11))
                    return 1;   
                else if((d>=1 && d<=30) && (m==1||m==3||m==5||m==7||m==8||m==10||m==12))
                    return 1;  
                else if((d>=1 && d<=28) && (m==2))
                    return 1;   
                else if(d==29 && m==2 && ((y%400==0)||(y%4==0 && y%4!=0)))
                    return 1;   
			}
			else 
			return 0;
			
		}
		else 
		return 0;
	}
	else 
	return 0;
}
int week(int d,int m,int y)
{	 
	int rem,cc,day,mc,lc,t;
	rem=y%100;
	t=rem/4;
	rem=rem+t;
	rem=rem%7;
	if(m==1)
	{
		mc=0;
	}
	else if(m==2)
	{
		mc=3;
	}
	 else if(m==3)
	{
		mc=3;
	}
	else if(m==4)
	{
		mc=6;
	}
	 else if(m==5)
	{
		mc=1;
	}
		else if(m==6)
	{
		mc=4;
	}
	 else if(m==7)
	{
		mc=6;
	}
	else if(m==8)
	{
		mc=2;
	}
	 else if(m==9)
	{
		mc=5;
	}
	else if(m==10)
	{
		mc=0;
	}
	else if(m==11)
	{
		mc=3;
	}
	 else if(m==12)
	{
		mc=4;
	}
	if(y>=1700 && y<=1799)
	{
		cc=4;
	}
	else if( y>=1800 && y<= 1899)
	{
		cc=2;
	}
	else if(y>=1900 && y<=1999)
	{
		cc=0;
	}
	else if( y>=2000 && y<= 2099)
	{
		cc=6;
	}
	else if(y>=2100 && y<=2199)
	{
			cc=4;
	}
	else if( y>=2200 && y<= 2299)
	{
		cc=2;
	}
	if(y==2300)
	{
		cc=0;
	}
	if(y%4==0)
	{
		if(m==1 || m==2)
		{
			lc=1;
		}
	}
	else
	{
		lc=0;
	}
	day=(rem+mc+cc+d-lc)%7;
	return day;
}

