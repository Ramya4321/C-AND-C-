#include<iostream>
using namespace std;
int main()
{
    int m, n, i, j, matrix[10][10], transpose[10][10];
	cout<<"Enter the number of rows and columns of matrix\n";
    cin>>m>>n;
    cout<<"Enter elements of the matrix\n";
    for (i=0;i<m;i++)
    for(j=0;j<n;j++)
    cin>>matrix[i][j];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    transpose[j][i] = matrix[i][j];
    //transpose[i][j] = matrix[j][i];   wont work
 	printf("Transpose of the matrix:\n");
 	for(i=0;i<n;i++) 
	 {
      for(j=0;j<m;j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
    }
 	return 0;
}		
/*
#include<stdio.h>
#define N 4
int main() 
{ 
    int A[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}
		}; 
  
    int B[4][4], i, j; 
    for (i = 0; i < N; i++) 
        for (j = 0; j < N; j++) 
            B[i][j] = A[j][i]; 
	printf("Result matrix is \n"); 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
           printf("%d ", B[i][j]); 
        printf("\n"); 
    } 
    return 0; 
}

*/

