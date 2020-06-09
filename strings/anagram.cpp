#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	int i,j=0,len1=0,len2=0;
	int found,notfound;
	int k;
	cout<<"enter a word\t";
	cin>>s1;
	cout<<"enter anagram\t";
	cin>>s2;
	for(i=0;s1[i]!='\0';i++)
	len1++;
	for(i=0;s2[i]!='\0';i++)
	len2++;
	if(len1==len2)
	{
		for(i=0;s1[i]!=0;i++)
		{
			found=0;
			for(j=0;j<len2;j++)
			{
				if(s1[i]==s2[j])
				{
					found=1;
					for(k=j;k<len2-1;k++)
					s2[j]=s2[j+1];
					break;
				}
			}
		if(found==0)
		{
			//notfound=1;
			break;
		}
		}
		
	}	
	
	if(found==1)
	cout<<"anagram";
	else
	cout<<"not anagram";
	//if(notfound==1)  cout<<"not anagram";
}
