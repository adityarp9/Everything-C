/* 
 * The use of the keyword const, with pointers in C.
 *
 */
 
#include <stdio.h>


int main(void)
{
	char a = 'B', b = 'C';
	char* const x = &a; // x is a CONSTANT POINTER (address) to a character.
	//x = &b; // Compiler throws an error.
	
	const char *y = &b; // y points to a CONSTANT CHARACTER (value).
	//*y = a; // Compiler throws an error.
	printf("a = %c\nb = %c\nx = %c\ny = %c\n", a, b, *x, *y);
	
		
} 
