/*
 *
 * Implementation of the stack data structure using singly linked list!
 * Arp: 19.07.16
 *
 * Stream line the input partlike linkl-2.
 */

#include <stdio.h>         // You know what!
#include <string.h>       // String length.
#include <ctype.h>       // Convert to upper/lower case!
#include <stdlib.h>     // Malloc.

#include "structuresW5.h" // SLL
int size = 0;

int stricmp(char*, char*);
node* push(int);
void showStack(node*);

int main(void)
{
    node *tos = NULL, *base = NULL, *semiTos = NULL;

    // Modify for a stack!
    while(1)
    {
        char* operation = malloc(5);
        printf("\nWhat operation do you want?\n");
        scanf("%s", operation);
        if (strlen(operation) >= 5)
        {
            printf("Not sure what you meant! Retry:\n");
        }
        else if ( stricmp("push", operation) )
        {
            // Push functions!
            printf("What to push?\n");
            int x;
            scanf("%d", &x);
            printf("Pushing...\n");
            node* newNode =  push(x);
            if (size == 0)
                base = newNode;
            else
                tos->pnext = newNode;
            size++;
            semiTos = tos;
            tos = newNode;
            tos->pnext = NULL;
            printf("Pushed\n");
        }
        else if ( stricmp("pop", operation) )
        {
            // Pop functions!
            if (size != 0)
            {
                printf("Popping...\n");
                if (size > 1)
                {
                    tos = semiTos;
                    tos->pnext = NULL;
                    semiTos = base;
                    while(semiTos->pnext != NULL)
                    {
                        if ( (semiTos->pnext)->pnext == NULL )
                            break;
                        semiTos = semiTos->pnext;
                    }
                }
                size--;
                printf("Popped!");
            }
            else
                printf("Nothing to be popped!\n");
        }
        else
            printf("Not sure what you meant! Retry:\n");

        showStack(base); free(operation);
    }


    free(tos); free(base); free(semiTos);
}

int stricmp(char* s1, char* s2)
{
    while (*s1 != '\0' || *s2 != '\0')
    {
        if ( tolower(*s1) != tolower(*s2) )
            return 0;
        s1++; s2++;
    }
    return 1;
}

// The creator.
node* push(int n)
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

void showStack(node* begin)
{
    if (size == 0)
    {
        printf("\n||| Stack is empty. |||\n");
        return;
    }
    node* trav = begin;
    printf("\n\t:STACK:\n\nBase of the stack\n------------------\n");
    while(trav != NULL)
    {
        printf("Address: %p.\n| Value: %d |\nNext value: %p\n\n", trav, trav->value, trav->pnext);
        trav = trav->pnext;
    }
    printf("Top of the stack\n------------------\n");
    free(trav);
    return;
}
