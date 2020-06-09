#include<iostream>
using namespace std;
class vehicle
{
	int m,p;
	public:
		void vget()
		{
			cout<<"enter milage\t";
			cin>>m;
			cout<<"enter price of the vehicle\t";
			cin>>p;
		}
		void vput()
		{
			cout<<"milage\t"<<m;
			cout<<"price\t"<<p;
		}
};
class car:public vehicle
{
	int owc,wy,sc,ft;
	public:
		void cget()
		{
			cout<<"enter owner ship cost:";
			cin>>owc;
			cout<<"enter warrenty in years:";
			cin>>wy;
			cout<<"enter seating capacity:";
			cin>>sc;
			cout<<"enter 1.petrol 2.diesel:";
			cin>>ft;
		}
		void cput()
		{
			cout<<"owner ship cost:"<<owc<<endl;
			cout<<"warrenty:"<<wy<<endl;
			cout<<"seating capacity:"<<sc<<endl;
			if(ft==1)
			cout<<"fuel type is petrol\n";
			if(ft==2)
			cout<<"fuel type is diesel\n";
		}
};
class bike:public vehicle
{
	int nc,ng,ct,wt,fts;
	public:
	void bget()
	{
	cout<<"enter number of -cylinders ,gears ,fuel tank size in inches\n";
	cin>>nc>>ng>>fts;
	cout<<"enter cooling type 1.air 2.liguid 3.oil\t";
	cin>>ct;
	cout<<"enter wheel type 1.alloys 2. spokes\t ";
	cin>>wt;
	}
	void bput()
	{
		cout<<"number of cylinders:"<<nc<<endl<<"gears:"<<ng<<endl;
		cout<<"fuel tank in inches:"<<fts;
		cout<<"cooling type ";
		if(ct==1)
		cout<<"air";
		else if(ct==2)
		cout<<"liquid\n";
		else if(ct==3)
		cout<<"oil";
		cout<<"wheel type \n";
		if(wt==1)
		cout<<"alloys";
		else if(wt==2)
		cout<<"spokes\n";
	}
};
class audi:public car
{
	string model;
	public:
		void aget()
		{
			cout<<"enter audi model type\t";
			cin>>model;
		}
		void aput()
		{
			cout<<"audi model type\t"<<model;
		}
};
class ford:public car
{
	string model;
	public:
		void fget()
		{
			cout<<"enter ford model type\t";
			cin>>model;
		}
		void fput()
		{
			cout<<"ford model type\t"<<model;
		}
};
class bajaj:public bike
{
	string model;
	public:
		void baget()
		{
			cout<<"enter bajaj model type\t";
			cin>>model;
		}
		void baput()
		{
			cout<<"bajaj model type\t"<<model;
		}
};
class tvs:public bike
{
	string model;
	public:
		void tget()
		{
			cout<<"enter tvs model type\t";
			cin>>model;
		}
		void tput()
		{
			cout<<"tvs model type\t"<<model;
		}
};
int main()
{
	audi a;
	ford f;
	bajaj b;
	tvs t;
	cout<<"audi car \n";
	a.cget();
	a.aget();
	cout<<"ford car\n";
	f.cget();
	f.fget();
	cout<<"bajaj bike\n";
	b.bget();
	b.baget();
	cout<<"tvs bike \n";
	t.bget();
	t.tget();
	
	cout<<"audi car \n";
	a.cput();
	a.aput();
	cout<<"ford car\n";
	f.cput();
	f.fput();
	cout<<"bajaj bike\n";
	b.bput();
	b.baput();
	cout<<"tvs bike \n";
	t.bput();
	t.tput();
}

