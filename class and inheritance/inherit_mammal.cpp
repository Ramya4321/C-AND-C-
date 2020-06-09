

#include<iostream>
using namespace std;
class mammals
{
	public:
		void mget()
		{
			cout<<"i am a mammel\n";
		}
};
class marine_animals
{
	public:
		void maget()
		{
			cout<<"i am a marine animal\n";
		}
};
class blue_whale:public mammals,public marine_animals
{
	public:
		void bwget()
		{
			cout<<"i belong to both catagories\n";
		}
};
int main()
{
	mammals m;
	marine_animals ma;
	blue_whale b;
	m.mget();
	ma.maget();
	b.bwget();
	b.mget();
	b.maget();
}

