/*
Row Matrix : When R = 1 and C = 0 then the matrix represent Row Matrix .
Column Matrix : When C = 1 and R = 0 then the matrix represent Column Matrix.
Horizontal Matrix : A Matrix in which number of rows is smaller than the number 
 of column is called Horizontal Matrix (R < C) .
Vertical Matrix : A Matrix in which number of rows is greater than the number of column
 is called Horizontal Matrix (R > C).
Square Matrix : A matrix in which number of rows is equal to number of column 
is called Square Matrix (R = C).
*/

#include <iostream> 
using namespace std; 
void type(int r, int c) 
{ 
    if (r == 0 && c == 1) 
        cout << "Column Matrix " << endl; 
    else if (r == 1 && c == 0) 
        cout << "Row Matrix " << endl; 
    else if (r < c) 
        cout << "Horizontal Matrix " << endl; 
    else if (r > c) 
        cout << "Vertical Matrix " << endl; 
    else if (r == c) 
        cout << "Square Matrix " << endl; 
} 
int main() 
{ 
	int r,n;
    cout<<"some examples";
    type(1, 0); 
    type(0, 1); 
    type(4, 5); 
    type(5, 4); 
 	type(3, 3);
	cout<<"enter rows and columns  " ;
	cin>>r>>n;
	type(r,n);
      
    return 0; 
} 
