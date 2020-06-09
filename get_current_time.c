#include <time.h>
#include <stdio.h>
int main(void)
{
    time_t mytime = time(NULL);
    char * time_str = ctime(&mytime);
    time_str[strlen(time_str)-1] = '\0';
    printf("Current Time : %s\n", time_str);
    return 0;
}
/*
char *ctime(const time_t *timer) 
returns a string representing the localtime based on the argument timer.

The returned string has the following format: Www Mmm dd hh:mm:ss yyyy, 
where Www is the weekday, Mmm the month in letters, dd the day of the month, 
hh:mm:ss the time, and yyyy the year.
*/
