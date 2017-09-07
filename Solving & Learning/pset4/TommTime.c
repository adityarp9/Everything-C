/*
 *
 * Digital clock has been implemented
 *
 */


#define _XOPEN_SOURCE 500 // Macro for usleep function
#include <stdio.h>
#include <unistd.h>

typedef struct Time
{
	int hours, minutes, seconds;
}
Times; 

void clear(void);

int main(void)
{
	Times digital;
	digital.hours = 0;
	digital.minutes = 0;
	digital.seconds = 0;
	clear();
	printf("Start the clock? Press Y(Yes) or N(No)\n");
	char op = getchar();
	if (op == 'N' || op == 'n')
		return 1;\
	printf("Press ctrl + c to exit.\n");	
	while (1)
	{			
		digital.seconds %= 60;
		digital.seconds++;
		
		if (digital.seconds == 60)
		{
			digital.seconds %= 60;
			digital.minutes++;
		}
		if (digital.minutes == 60)
		{
			digital.hours %= 24;
			digital.minutes++;
		}
		clear();	
		printf("%02d:%02d:%02d\n", digital.hours, digital.minutes, digital.seconds);
		usleep(1000000);
	}
		
}


void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}
