/*
 *
 * Creation, unsorted insertion, deletion of singly linked list code!
 * One memory leak error left. Check ASAP!
 * (SORTED insertion remaining).
 *
 */

#include <stdio.h>
#include <stdlib.h> // Malloc function.
#include <string.h> // String length function.

#include "structuresW5.h"

node* create(int);
node* insert(node*, node*, int);
node* delete(node*, int);
void printSll(node*);

int main(void)
{
    node *start = NULL, *tail = NULL;
    node* crawl = NULL;
    node* newNode = NULL;
    int nodeCount = 0;

    printf("Let's make a linked list: \n");
    while(1)
    {
        char buffer[11], buffer2;
        printf("Enter the value (4 bit signed integer): ");
        scanf("%s", buffer);
        // If the user wants to exit
        if (buffer[0] == 'e')
        {
            tail = crawl;
            printf("Tail: %p\n", tail);
            break;
        }
        // If input is too long, adios!
        if (strlen(buffer) >= 11)
            return 1;

        // Here you go...
        int x;
        if ( sscanf(buffer, " %d %c", &x, &buffer2) == 1 && x <= 2147483647)
        {
            // Go create!
            newNode = create(x);
            nodeCount++;
            // Check if its the first node!
            if (nodeCount == 1)
                start = newNode;
            // If not the 1st node then join the nodes.
            else
                crawl->pnext = newNode;
            // Crawl to the current node
            crawl = newNode;
        }
        else
            printf("Retry: ");

    }
    // Nullify the last node
    crawl->pnext = NULL;

    // Print the linked list.
    printSll(start);

    // Insertion of an element.
    int x;
    printf("What integer do you want to insert: ");
    scanf("%d", &x);
    // Create a new node to insert.
    node* insNode = create(x);
    // Insert at the beginning of the SLL.
    start = insert(start, insNode, x);
    // Modified start
    printf("Now start is: %p\n", start);

    // Print the new list!
    printf("The new list is:\n\n");
    printSll(start);

    // Deletion of an element.
    printf("What do you want to delete?\n");
    int y;
    scanf("%d", &y);
    // The deleted node.
    node* deleted = delete(start, y);
    // Check if the node has been deleted!
    if (deleted != NULL)
        printf("Node deleted is %p\n", deleted);
    // If no, well its an error.
    else
        printf("Error in deleting the node.\n");

    // Print SLL.
    printSll(start);

    // Look ma, freed!
    free(start); free(newNode);

    //Sayonara, fella.
    return 0;
}

// The creator.
node* create(int n)
{
    node* sllnode = malloc(sizeof(node));
    if (sllnode == NULL)
    {
        printf("Error creating node.\n");
        return NULL;
    }
    sllnode -> value = n;
    sllnode -> pnext = NULL;
    return sllnode;
}

// The insertor.
node* insert(node* begin, node* newN, int n)
{
    // Insert at the beginning of the linked list!
    newN->pnext = begin;
    printf("New node is at: %p\n", newN);
    begin = newN;
    return begin;
}

// The destroyer.
node* delete(node* begin, int Dvalue)
{
    node* crawl = begin;
    while (crawl->pnext != NULL)
    {
        if ( (crawl->pnext)->value == Dvalue )
        {
            crawl->pnext = (crawl->pnext)->pnext;
            return crawl;
        }
        else if (crawl->value == Dvalue)
        {
            begin->value = (crawl->pnext)->value;
            begin->pnext = (crawl->pnext)->pnext;
            return begin;
        }
        else
            crawl = crawl->pnext;
    }
    free(crawl);
    return NULL;
}

// Let's see what I've got.
void printSll(node* begin)
{
    node* crawl = begin;
    while (crawl != NULL)
    {
        printf("\nnode = %p\nnode[i]->value = %d\nnode[i]-pnext = %p\n", crawl, crawl->value, crawl->pnext);
        crawl = crawl->pnext;
    }
    return;
}
