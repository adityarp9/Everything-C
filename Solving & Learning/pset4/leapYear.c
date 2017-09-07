/*
 *
 * A simple code for leap year detection.
 *
 */

#include <stdio.h>

int main(void)
{        
   	printf("Usage: The program will ask for the year continuously, press ctrl + c key to exit.\n");
   	while(1)
   	{
   		printf("Enter the year: ");
   		int year = 0;
    	scanf("%d", &year); 
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
			printf("Leap\n");
		else
			printf("Common\n");
	}			
 	return 0;       
}
