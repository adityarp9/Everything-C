#include <stdio.h>

int main(void)
{
	char s[5];
	char *a = s;
	printf("%c\n", *s);
	puts(a); // Why print two extra chars? 
	puts(s); // Why print two extra chars?
}
