/*
 *
 * Recreate strlen() function using pointers!
 *
 */

#include <stdio.h>
#include <stddef.h>
#include <cs50.h>

int strleng(const char* y);

int main(void)
{
	char* x;
	x = GetString();
	int stringLen = strleng(x);
	
	printf("The length of the string is : %d\n", stringLen);
	return 0;
}

int strleng(char* y)
{
	char* a = y;
	while (*a)
	{
		a++;
	}
	return a - y;
}
