/*
7.Aditya is fond of ladders. Everyday he goes through pictures of ladders online but unfortunately today he ran out of ladder pictures online. Write a program to print "ladder with N steps", which he can use to get his daily dose of ladder love.
INPUT:
Input contains integer N, the number of steps in the ladder
OUTPUT:
Print the ladder with the gap between two side rails being 3 spaces("   ").
Check the sample output for format of printing the ladder.
CONSTRAINTS:
1<=N<=40
Intput 4
ouput
*   *
*   *
*****
*   *
*   *
*****
*   *
*   *
*****
*   *
*   *
*****
*   *
*   *
*/
#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cout<<"enter a number <40";
 cin>>n;
 while(1<=n && n<=40)
 {
 for(i=0;i<n;)
 {
  cout<<"*   *"<<endl;
  cout<<"*   *"<<endl;
  cout<<"*****"<<endl;
  n--;
 }
 }
}
/*
out put:
enter a number <40 3
*   *
*   *
*****
*   *
*   *
*****
*   *
*   *
*****
*/
