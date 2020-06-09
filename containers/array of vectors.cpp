// C++ program to illustrate array of vectors 
  
#include <iostream> 
using namespace std;
#include <vector> 
using namespace std; 
vector<int> v[5]; 
void insertionInArrayOfVectors() 
{ 
    for (int i = 0; i < 5; i++) 
	{ 
        for (int j = i+1; j < 5; j++)
		{ 
            v[i].push_back(j); 
        } 
    } 
} 
void printElements() 
{ 
    for (int i = 0; i < 5; i++) 
	{ 
        cout << "Elements at index " << i << ": "; 
        for (auto it = v[i].begin(); it != v[i].end(); it++)
        { 
            cout << *it << ' '; 
            //v is a vector, so we point 
        } 
        cout << endl; 
    } 
} 
void arrayOfVectors() 
{ 
    insertionInArrayOfVectors(); 
    printElements(); 
} 
  
// Driver code 
int main() 
{ 
    arrayOfVectors(); 
    return 0; 
} 
//compiler issue'
//works in online compiler
