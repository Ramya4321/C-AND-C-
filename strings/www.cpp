#include<iostream>
#include<math.h>
using namespace std;
class www
{
	string s;
	public:
		void read()
		{
			cout<<"enter string in capitals\n";
			getline(cin,s);
		}
		void calc()
		{
			int i,length,j,k,l=0,sum=0;
			length=s.length();
			cout<<"length="<<length<<endl;
			for(i=0;i<=length;i++)
			{
				if(s[i]==' ' || s[i]=='\0')
				{
					for(j=i-1,k=l;j>k;j--,k++)
					{
						sum=sum+abs(s[j]-s[k]);
					}
				if(j==k)
					sum=sum+s[j]-64;
					cout<<sum<<endl;
					sum=0;
					l=i+1;
				}
			}
		}	
};
int main()
{
	www w;
	w.read();
	w.calc();
	return 0;
	}

