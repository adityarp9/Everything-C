/*
 *
 * This code passes structures to functions.
 *
 */

#include <stdio.h>
#include <stdbool.h>

typedef struct Date
{
    int d, m, y;
}
Dates;
bool isLeap(Dates z);
int main(void)
{
    Dates today, tomm;
    
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Enter your current date, month, year in this same order\n");
    scanf("%d%d%d", &today.d, &today.m, &today.y);
    printf("Today's Date: %d / %d / %d.\n", today.d, today.m, today.y);
   
	if (isLeap(today))
		months[1] = 29;
				
    printf("Tomorrow's date is...\n");
    tomm.d = (today.d % months[today.m - 1]) + 1;
    if (today.d == months[today.m - 1])
        tomm.m = (today.m % 12) + 1;
    else
    	tomm.m = today.m;
    
    if (today.m == 12)
    	tomm.y = today.y + 1;
    else
    	tomm.y = today.y;
    	
    printf("%d / %d / %d.\n", tomm.d, tomm.m, tomm.y);
    
    return 0;
}

bool isLeap(Dates z)
{
	if ((z.y % 4 == 0 && z.y % 100 != 0) || (z.y % 400 == 0))
    	return true;		
	return false;	
}
