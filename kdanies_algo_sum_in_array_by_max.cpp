//#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n";
    cin>>n;
    int A[n];
    cout<<"enter array";
    for(int i=0;i<n;i++) 
    cin>>A[i];
    long long max_ans;
    max_ans=A[0];
    for(int i=0;i<n;i++)
    {
        long long result=0;
        for(int j=i;j<n;j++)
        {
            result+=A[j];
            max_ans=max(max_ans,result);
        }
    }
    cout<<"maximum =";
    cout<<max_ans;
    return 0;
}
 
