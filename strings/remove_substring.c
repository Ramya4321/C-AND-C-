#include <stdio.h>
#include <string.h>
void removeSubstr (char *string, char *sub)
{
	char *match;
	int len = strlen(sub);
	while ((match = strstr(string, sub))!=NULL)//math points to the substring 
	{
	*match = '\0';
	strcat(string, match+len);
	}
} 
int main() 
{
char test[] = "okay/op 1234 /opdone";
removeSubstr(test, "/op");
puts(test);
return 0;
}
//https://cboard.cprogramming.com/c-programming/143155-simple-removal-string-string-via-strtok.html
//try in linux
