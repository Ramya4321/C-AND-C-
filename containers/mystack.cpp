//stack last in first out--removing last item first--lifo
//top,bottom,pop,push
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> mystack;
    mystack.push(0); 
    mystack.push(1); 
    mystack.push(2); 
    while(!mystack.empty())
    {
    cout<<mystack.top()<<" ";
    mystack.pop();
    }
    mystack.push(9);
    cout<<mystack.top();
}
