#include <stdio.h>

int main(void)
{
	printf("Enter your initials:");
	char i1 = getchar();
	getchar();
	char i2 = getchar();
	/*
	 * Instead of the above method above, we can also use getch(), which helps
	 * reduce the number of lines of code.
	 * But then we lose the luxury of pressing backspace to re-enter the char.
	 */
	putchar(i1);
	putchar(i2);
	printf("\n");
}
