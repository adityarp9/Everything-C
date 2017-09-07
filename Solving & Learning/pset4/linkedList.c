/*
 * Basic linked list code ahead.
 * Reference: Stepehen G. Kochan's Programming in c.
 */
#include <stdio.h>

#include "LinkedList.h"

int main(void)
{
	struct entry l1, l2, l3;
	
	// Initialize the value member of l1 l2 and l3
	l1.value = 100; l2.value = 200; l3.value = 300;
	
	// Initialize a starting link to l1.
	struct entry *start = &l1;
	// Link l1 to l2, l2 to l3
	l1.next = &l2; l2.next = &l3;
	// Terminating link from l3
	l3.next = (struct entry *)0;
	
	// Print l1, l2, l3 indirectly.
	printf("Value at the start = %d\nValue next to l1 = %d\nValue next to l2 = %d\n", start -> value, l1.next -> value, l2.next -> value);
	
	// Print l1, l2, l3 directly
	printf("l1 = %d\nl2 = %d\nl3 = %d\n", l1.value, l2.value, l3.value);
	
	// Print the link sequentially
	while (start != (struct entry*)0)
	{
		printf("%d\n", start -> value);
		start = start -> next;
	}	
}
