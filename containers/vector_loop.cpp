//VECTOR
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    v.push_back(5);
    v.push_back(100);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;
    cout<<v.size()<<endl;
   // cout<<v.begin()<<endl;
   // cout<<v.end();
    vector <int>foo(3,100);
    vector <int>bar(2,200);
    for(int j=0;j<foo.size();j++)
    cout<<foo[j]<<cout<<"\t";
    cout<<endl;
    
    for(int j=0;j<bar.size();j++)
    cout<<bar[j]<<cout<<"\t";
    cout<<endl;
    
    //foo.swap();
    //for(int j=0;j<foo.size();j++)
    //cout<<foo[j]<<cout<<"\t";
    //cout<<endl;
}
/*
5
100
2
1000x488a08     1000x488a08     1000x488a08
200.60x488a08   200.60x488a08
*/
//foo and bar are any names
