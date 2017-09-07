/*
 *
 * Very important code to glance over. Demonstrated below are the concepts of
 * string pointers.
 *
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[9];
	
	// Gets from the user 9 chars, the last one being '\0'.
	fgets(s, 9, stdin);
	// Prints 'em out.
	puts(s);
	
	// Check if the string has a '\0' char.
	for (int i = 0; i < 9; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	// Print s string again.
	puts(s);
	
	// Copy the address of s into t.
	char* t = s;
	
	// Print out t.
	puts(t);
	
	// Assign t to another string.
	t = "Ameya.R.Patgaonkar";
	
	// Print out s and t.
	puts(s);
	puts(t);
	return 0;
}
