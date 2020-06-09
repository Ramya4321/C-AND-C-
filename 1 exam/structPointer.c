#include<stdio.h>
struct subject
{
	int subno;
	char subname[20];
};
int main()
{
	struct subject sub[] = {{102,"maths"},{103,"physics"},{104,"chemistry"}	};
	printf("%d",sub[1].subno);
	printf("%s\n",(*(sub+1)).subname);//103physics
}
