#include<iostream>
using namespace std;
int main()
{
	int a[20][20],m,n;
 	cout<<"enter rows and columns";
 	cin>>m>>n;
 	cout<<"enter array\n";
	for(int i=0;i<m;i++)
 	for(int j=0;j<n;j++)
	cin>>a[i][j];
	int k,  i = 0, j = 0;
    m--, n--;
    while(i <= m && j <= n)
    {
        // Print the row left to right
        for(k = j; k <= n; k++)
        {
            printf("%d ", a[i][k]);
        }
        // Print the column top to bottom
        i++;
        for(k = i; k <= m; k++)
        {
            printf("%d ", a[k][n]);
        }
        // Print the row right to left
        n--;
         for(k = n; k >= j; k--)
            {
                printf("%d ", a[m][k]);
            }
             m--;
             for(k = m; k >= i; k--)
        {
            printf("%d ", a[k][j]);
        }
        j++;
      /*  if(m >= k)
        {
            for(k = n; k >= j; k--)
            {
                printf("%d ", a[m][k]);
            }
             m--;
          
        }*/
         
        // Print the column bottom to top
        
    }
    printf("\n");
}

