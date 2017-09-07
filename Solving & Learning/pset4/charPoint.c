#include <stdio.h>

int main(void)
{
	char a[10] = "Aditya.R.P";
	int i = 0;
	
	/* When the while loop is commented out, puts(a) prints out 2 random chars
	 * more than the given string. Why??!
	 */
	puts(a);
	while (a[i] != '\0')
		printf("%c", a[i++]);
	printf("\n");	
}
