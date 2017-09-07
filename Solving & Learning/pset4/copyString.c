/*
 * Copy string using pointers
 *
 */

#include <stdio.h>
#include <cs50.h>

void copyString(char* a, char* b);

int main(void)
{
	char *x, y[512];
	
	printf("String:\n");
	x = GetString();
	
	printf("Copying...\n");
	copyString(x, y);
	
	puts(y);
	
	return 0;
}

void copyString(char* a, char* b)
{
	while (*a)
	{
		*(b++) = *(a++);
	}
	*a = '\0';
	return;
}
