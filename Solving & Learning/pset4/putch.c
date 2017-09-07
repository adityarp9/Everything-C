#include <stdio.h>
int main(void)
{
	//printf("Enter your initials:");
	printf("What are your two initials?\n");
	char firstInit, lastInit;
	firstInit = getch();
	putch(firstInit);
	lastInit = getch();
	putch(lastInit);
}
