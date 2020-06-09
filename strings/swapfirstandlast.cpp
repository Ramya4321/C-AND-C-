#include <iostream>
#include <math.h>
 using namespace std;
 int main()
{
    int num, last, first, temp, swap, count = 0;
    cout<<"Enter any number:";
    cin>>num;
    temp = num;
    last = temp % 10;
    count = (int)log10(temp);
    cout<<"count="<<count<<endl;//count will always be one less
    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    cout<<"Last Digit: "<<last<<endl;
    cout<<"First Digit: "<<first<<endl;
    swap = (last * pow(10, count) + first) + (num - (first * pow(10, count) + last));
    cout<<"last * pow(10, count) + first="<<last * pow(10, count) + first<<endl;
    cout<<"num - (first * pow(10, count) + last)="<<num - (first * pow(10, count) + last)<<endl;
    cout<<num<<" is swapped to "<<swap;
    return 0;
}

/*
Enter any number:46453
Last Digit: 3
First Digit: 4
46453 is swapped to 36454
--------------------------------
Process exited a
*/


