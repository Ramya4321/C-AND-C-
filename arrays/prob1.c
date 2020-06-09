#include<stdio.h>
int main()
{
	char temp;
	char arr[10]={1,2,3,4,5,6,9,8};
	temp=(arr+1)[2];
	printf("temp=%d\n",temp);
	printf("arr+1=%d\n",arr+1);
	printf("&arr[1]=%d\n",&arr[1]);
	printf("*arr+1=%d\n",*arr+1);
	printf("*(arr+1)=%d\n",*(arr+1));
	
//	printf("&arr[1][2]=%d",&arr[1][2]);   //error
	
	printf("arr=%d\n",arr);
	printf("*arr=%d\n",*arr);
	printf("&arr=%d\n",&arr);
	printf("&arr+0=%d\n",&arr+0);
	printf("arr+0=%d\n",arr+0);
	
	int brr[10]={1,3,5,6,2};
	printf("\n%d %d",brr,&brr);//answer is same but
	//Both mean two different things. arr gives 
	//the address of the first int, whereas the &arr 
	//gives the address of array of ints.
	return 0;
}
