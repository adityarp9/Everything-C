#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char s[10];
	int i = 0, x;
	while ((x = getchar()) != '\n')
	{
		s[i++] = (char) x; 
	}
	x = i - 0; i = 0;
	while(i <= x)
	{
		putchar(s[i++]);
	}
	return 0;
}
