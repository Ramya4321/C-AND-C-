#include <iostream>
using namespace std; 
#define NO_OF_CHARS 256   
int main()  
{  
	char s[1];
	string str;
	cout<<"enter a string\n";
	getline(cin,str);
	int count[NO_OF_CHARS] = {0};
	int i;
    for (i = 0; str[i]; i++)  
        (count[str[i]])++;  
    int first = 0, second = 0;  
    for (i = 0; i < NO_OF_CHARS; i++)  
    { 
        if (count[i] > count[first])  
        {  
            second = first;  
            first = i; 
        }  
		else if (count[i] > count[second] && count[i] != count[first])  
            second = i;  
    }  
    char res=second;
  cout<<"second most frequent character="<<res;  
}
	
  
