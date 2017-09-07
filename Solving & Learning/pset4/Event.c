#include <stdio.h>
#include <cs50.h>

#include "TimeStruct.h"
#include "DateStruct.h"

typedef struct Events
{
    Dates d1;
    Times t1;
    char *team1, *team2;
}
events;

FILE *eu2k16;

int main(int argc, char* argv[])
{
    printf("EURO 2016 is here.\n");
    eu2k16 = fopen("EuroSchedule.txt", "a+");
    if (argc != 2)
    {
    	printf("Usage:%s NoOfEvents\n", argv[0]);
    	return 1;
    }
    
    int x = atoi(argv[1]);
    events euro[x];
    
    printf("Enter %d match events:(To exit, press ctrl + c)\n", x);
    /* Something going wrong in the following loop.
     * Say x = 2; then on the second iteration:-
     * Line 39 is not executing. Fix it!
     */
    for (int i = 0; i < x; i++)
    {
    	printf("\n\tMatch %d\n", i + 1);
    	fprintf(eu2k16, "\n\tMatch %d\n", i + 1);
    	printf("Team 1: ");
 	euro[i].team1 = GetString();
 	printf("Team 2: ");
 	euro[i].team2 = GetString(); 	   
 	fprintf(eu2k16, "%s vs %s\n", euro[i].team1, euro[i].team2);
 	
 	printf("The game is on : \n");
 	printf("Day: ");
 	scanf("%d/%d/%d", &euro[i].d1.d, &euro[i].d1.m, &euro[i].d1.y);
 	fprintf(eu2k16, "Kick-off is on: %d/%d/%d\n", euro[i].d1.d, euro[i].d1.m, euro[i].d1.y);	
    }
    
    	
    return 0;	
}
