/*
Given a Character matrix as input, the task is to check whether all the enemies are killed or not based on below conditions:
1. The matrix can contain 3 characters
X –> Denotes the War area.
B –> Denotes the bomb.
E –> Denotes the Enemies.
2. Bomb ‘B’ can blast in only horizontal and vertical directions from one end to another.
3. If all enemies are killed by the present bombs, print Yes, else print No
Examples:
Input: matrix =
XXEX
XBXX
XEXX
XXBX 
Output: Yes

Input: matrix =
XXEX
XBXX
XEXX
XXXX
Output: No
*/

#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	char a[20][20];
	int count=0;
	cout<<"enter number of rows(rows=columns)\t";
	cin>>n;
	cout<<"enter the matrix\n";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(a[i][j]=='B')
	{
		for(int k=0;k<n;k++)
		{
			if(a[i][k]=='E')
				a[i][k]='X';
			if(a[k][j]=='E')
				a[k][j]=='X';
		}
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
		if(a[i][j]=='E')
			count++;
	}
	if(count>0)
		cout<<"no\n";
	else
		cout<<"yes\n";
}
