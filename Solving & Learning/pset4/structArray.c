#include <stdio.h>
#include <stdlib.h> // Function atoi();

#include "TimeStruct.h" 

FILE *rec;

int main(int argc, char* argv[])
{
	
	if (argc != 2)
	{
		printf("Usage:./%s NoOfRecords\n", argv[0]);
		return 1;
	}	
	
	int n = atoi(argv[1]);
	
	Times records[n];	
	
	rec = fopen("Records.txt", "a+");
	printf("Enter the records of %d player(s):\n", n);
	fprintf(rec, "\tRecords\n");
	for (int i = 0; i < n; i++)
	{
		printf("Player %d's record:\n", i + 1);
		fprintf(rec, "Player %d's record:\n", i + 1);
		printf("Minutes\tSeconds\n");
		fprintf(rec, "Minutes\t\tSeconds\n");
		scanf("%d\t%d", &records[i].minutes, &records[i].seconds);
		fprintf(rec, "%d\t\t%d\n", records[i].minutes, records[i].seconds);
	}
	printf("Thank you.\n");
	fclose(rec);
	
	return 0;
}
