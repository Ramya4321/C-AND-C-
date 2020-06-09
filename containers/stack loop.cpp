#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> mystack;
    for(int i=0;i<8;i++)
    mystack.push(i);
    while(!mystack.empty())
    {
    cout<<mystack.top()<<" ";
    mystack.pop();
    }
    mystack.push(9);
    cout<<mystack.top();
}
