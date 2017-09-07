#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	time_t t;
	srand(time(&t));
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 8 + 1);
	printf("\n");
}

