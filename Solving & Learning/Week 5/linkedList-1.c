/*
 * Basic functions of linked lists.
 * Insertion; Deletion.
 * Singly linked lists!
 *
 * Super incomplete, code doesn't work. Just a reference.
 *
 */

#include <stdio.h>
#include <stdlib.h> // malloc function!
#include <string.h> // strlen();

#include "cs50.h"
#include "structuresW5.h"

// Initialize a linked list.
node* init(int);

// Insert a node.
node* insert(node*, node*, int);

// Delete a node
node* delete(node*, int);

int main(void)
{
    // Step 1: Initialize a singly linked list
    printf("Let's make a linked list: \n");
    node *new = NULL, *start = NULL;
    int n = 0;
    while(1)
    {
        char buffer[11], buffer2;
        printf("\nEnter the (signed 4 byte) integer value or press to exit: ");
        scanf("%s", buffer);
        if(buffer[0] == 'e' || strlen(buffer) >= 11)
        {
            new -> pnext = NULL;
            printf("%d\n%p\n", new->value, new->pnext);
            free(new);
            break;
        }

        int x;
        if ( sscanf(buffer, " %d %c", &x, &buffer2) == 1 && x <= 2147483647)
        {
            new = init(x);
            n++;
            if (n == 1)
                start = new;
            printf("%d\n%p\n%p\n", new->value, new->pnext, start);
        }
        else
            printf("Retry: ");
    }
/*
    // Insertion of a node
    char op;
    printf("Start: %p\n", start);
    do
    {
        printf("Do you want to insert or delete a value? (node)\nPress i to insert and d to delete a value (node)\nPress e to exit: \n");
        op = GetChar();
        if (op == 'i')
        {
            printf("Value to be inserted please: ");
            int x;
            scanf("%i", &x);
            if (x > 2147483647)
            {
                printf("2147483647 is the limit.\n");
            }
            else
            {
                node* new = init(x);
                if (new == NULL)
                    return 1;
                start = insert(new, start, x);
                if (new == NULL)
                    return 1;
                printf("%p\n", start);
                free(new);
            }
        }
        else if(op == 'd')
        {
            printf("Value to be deleted please: ");
            int x;
            scanf("%i", &x);
            printf("Start: %p\n", start);printf("Start: %p\n", start);
            node* Dnode = delete(start, x);
            if (Dnode == NULL)
                printf("Node couldn't be deleted.\nYour node may not exist or there was an error while deleting.\n");
        }
    }
    while (op != 'e');
*/
    free(start);
    return 0;
}

node* init(int n)
{
    node* sllnode = malloc(sizeof(node));
    if (sllnode == NULL)
    {
        printf("Error creating node.\n");
        return NULL;
    }
    sllnode -> value = n;
    sllnode -> pnext = malloc(sizeof(node));
    return sllnode->pnext;
}

node* insert(node* newNode, node* begin, int NewValue)
{
    printf("Do you want to insert in a sorted manner or the head of the linked list?\nPress s for sorted and u for unsorted.\n");
    int c = GetChar();
    if (c == 'u')
    {
        newNode->pnext = begin->pnext;
        printf("%p\n", begin);
        begin = newNode;
        newNode->value = NewValue;
        begin -> pnext = newNode;
        return begin;
    }
    else if (c == 's')
    {
        //node* crawl = newNode;
        //while (crawl != NULL)
    }
    else
    {
        free(newNode);
        free(begin);
        printf("Error inserting the node.\n");
    }
    return NULL;
}

node* delete(node* begin, int Dvalue)
{
    node* crawler = begin;
    printf("begin1 = %p\n", begin);
    while (crawler != NULL)
    {
        if ((crawler -> pnext) -> value == Dvalue)
        {
            printf("crawler->pnext = %p\n", crawler->pnext);
            crawler -> pnext = (crawler -> pnext) -> pnext;
            printf("crawler->pnext = %p\n(crawler->pnext)->pnext = %p\n", crawler->pnext, (crawler->pnext)->pnext);
            return (crawler -> pnext) -> pnext;
        }
    }
    return NULL;
}
