
#include<iostream>
using namespace std;
class shape
{
	public:
	void put()
	{
		cout<<"this is a shape\n";
	}
};
class polygon:public shape
{
	public:
	void put()
	{
		cout<<"polygon is a shape\n";
	}
};
class rectangle:public shape
{
	public:
	void put()
	{
		cout<<"reactangle is a polygon\n";
	}
};
class triangle:public shape
{
		public:
	void put()
	{
		cout<<"triangle is a polygon\n";
	}
};
class square:public shape
{
	public:
	void put()
	{
		cout<<"square is a polygon\n";
	}	
};
int main()
{
	shape s;
	polygon p;
	rectangle r;
	triangle t;
	square sq;
	s.put();
	p.put();
	r.put();
	sq.put();
}

