/*
 *
 * Optimized code for finding tomorrow's date.
 * Compund  
 * Reference: Kochan, Programming in C.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#include "DateStruct.h"

bool isLeap(Dates z);
Dates dateUpdate(Dates);

int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    Dates today;
        
    printf("Enter your current date, month, year in this same order\n");
    scanf("%d%d%d", &today.d, &today.m, &today.y);
    printf("Today's Date: %d / %d / %d.\n", today.d, today.m, today.y);
 	  
	if (isLeap(today))
		months[1] = 29;

	if (today.m > 12)
	{
		printf("The month (%d) you have specified does not exist. Please try again!\n", today.m);
		return 1;
	}
	if (today.d > months[today.m - 1])	
	{
		printf("The month you have specified does not contain this (%d) day. Please try again!\n", today.d);
		return 2;
	}
	
				
    printf("Tomorrow's date is...\n");
    Dates tmrw = dateUpdate(today);	
    printf("%d / %d / %d.\n", tmrw.d, tmrw.m, tmrw.y);
    
    return 0;
}

bool isLeap(Dates z)
{
	if ((z.y % 4 == 0 && z.y % 100 != 0) || (z.y % 400 == 0))
    	return true;		
	return false;	
}

Dates dateUpdate(Dates today)
{
	Dates tomm; 
 	if (today.d != months[today.m - 1])
 		tomm = (Dates) {today.d + 1, today.m, today.y};
 	else if (today.m == 12)
 		tomm = (Dates) {1, 1, today.y + 1};
 	else
 		tomm = (Dates) {1, today.m + 1, today.y};
 				  	
    return tomm;		
}
