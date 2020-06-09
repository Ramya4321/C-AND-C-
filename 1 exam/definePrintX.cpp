#define PRINT(x) (#x)
int main()
{
	printf("%s" , PRINT(x));
	return 0;
}
//error
//ouput different for c and c++
