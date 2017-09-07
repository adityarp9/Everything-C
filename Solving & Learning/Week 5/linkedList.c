/*
 * Demonstrate the basic linked list (Also demonstrated in pset4 directory).
 * Also, demonstrate some basic functions of linked list.
 * Searching!
 *
 *
 */
#include <stdio.h>

#include "structuresW5.h"

int searchNode(node*, int);

int main(void)
{
    printf("How many values?\n");
    int n; scanf("%d", &n);
    node nodeInt[n];
    printf("Enter your values:\n");

    // Initialize the linked list!
    for (int i = 0; i < n; i++)
    {
        printf("Value %i: ", i);
        scanf("%i", &(nodeInt[i].value));
        if (i == n - 1)
            nodeInt[i].pnode = NULL;
        else
            nodeInt[i].pnode = &(nodeInt[i + 1]);
    }
    // To search a value in the linked list!
    int x;
    printf("Enter the value you want to search please: ");
    scanf("%i", &x);
    if(searchNode(nodeInt, x))
        printf("Value is found!\n");
    else
        printf("Value is not found!\n");




    return 0;
}

int searchNode(node* a, int b)
{
    node *ptr = a; // We duplicate it like this because it is better to always
                   // keep a pointer pointing to the beginning of a linked list!

    while (ptr != NULL)
    {
        if (ptr -> value == b)
            return 1; // True, found!
        else
            ptr = ptr -> pnode;
    }
    return 0; // False, not found!
}
