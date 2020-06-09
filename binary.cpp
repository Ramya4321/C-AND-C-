/*
ILS 1:  Binary(ILS1-4892)
Question:Declare an Integer variable and ask user to enter an 
Integer number and assign it to the variable. Write logic in a separate function
 for finding the binary number for the user entered number.
  Print back the result to the user. Also provide a condition to check that user is not passing 0 as the input.
Test Cases: 
Input Text:
15
Output Text:
1111
*/
#include<iostream>
int binary(int);
using namespace std;
int main()
{
int n;
cout<<"enter a decimal number";
cin>>n;
binary(n);
}
int binary(int n)
{
int a[20];
int i=0;
while(n>0)
	{
	a[i]=n%2;
	n=n/2;
	i++;	
	}
int j;
cout<<"binary number is";
for(j=i-1;j>=0;j--)
cout<<a[j]; 
cout<<endl;                                                                                                            
}

/*
enter a number9
binary number is1001
enter a number5
binary number is101
bash-4.3# ./a.out
enter a number12
binary number is1100
bash-4.3# ./a.out
enter a number30
binary number is11110
bash-4.3# 
enter a number258725
binary number is111111001010100101


*/
