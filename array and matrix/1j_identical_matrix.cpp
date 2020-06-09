#include <bits/stdc++.h> 
//#define N 4 
using namespace std;
int m,n; 
int aresame(int a[20][20],int b[20][20]);
int main() 
{ 

int a[20][20],b[20][20];
cout<<"enter number of rows and columns";
cin>>m>>n;

    /*int A[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    int B[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
                    */
  cout<<"enter a";
for(int i=0;i<m;i++)
 for(int j=0;j<n;j++)
 cin>>a[i][j];
 cout<<"enter b";
 for(int i=0;i<m;i++)
 for(int j=0;j<n;j++)
 cin>>b[i][j];
if (aresame(a, b)) 
        cout << "Matrices are identical"; 
    else
        cout << "Matrices are not identical"; 
    return 0; 
} 
int aresame(int a[20][20],int b[20][20]) 
{ 
    int i, j; 
    for (i = 0; i < m; i++) 
        for (j = 0; j < n; j++) 
            if (a[i][j] != b[i][j]) 
                return 0; 
    return 1; 
} 
  

