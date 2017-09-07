/*
 *
 * Hash tables demo along with Search!
 * Arp
 * Started on: 21.07.2016.
 * Finished on: 22.07.2016
 * Check: VALGRIND ERRORS. There are Memory Leaks!
 * Comment the code!
 *
 */

#include <stdio.h>
#include <stdlib.h>  // Malloc function. Free function.
#include <string.h> // String length function.

#include "cs50.h"          // GetString()
#include "structuresW5.h" // Hash table node.

// Constant
#define HASH_MAX 10

// Debugging macros!
#define Debug 1
#ifdef DEBON
    #define DEBUG(level, fmt, ...) \
        if (Debug >= level) \
            fprintf(stderr, fmt, __VA_ARGS__);
#else
#define DEBUG(level, fmt, ...)
#endif

// Function prototypes!
unsigned int hash(char*);
hNode* create(char*);
void searchHT(hNode* a[], int, char*);
void ShowHash(hNode* a[]);

// Let's go...
int main(void)
{
    // Array of hash table nodes.
    hNode* HashTable[HASH_MAX];
    // Nullify the empty nodes.
    for (int i = 0; i < HASH_MAX; i++)
        HashTable[i] = NULL;
    // String to input.
    char* a = NULL;
    // Input the names.
    while (1)
    {
        // Ask.
        printf("Please enter a name or press e to exit: ");
        // Temp string to check for errors!.
        char* e = GetString();
        // Check for errors.
        if (e == NULL)
        {
            free(e);
            return 1;
        }
        if (e[0] == 'e')
        {
            free(e);
            break;
        }
        a = malloc(strlen(e) + 1);
        if (a == NULL)
        {
            printf("Error reading the string. Sorry.\n");
            return;
        }

        strcpy(a, e);
        free(e);
        int x = hash(a);

        DEBUG (2, "Hashed: %i.\n", x);

        if (HashTable[x] == NULL)
            HashTable[x] = create(a);
        else
        {
            hNode* temp = create(a);
            temp->pnext = HashTable[x];
            HashTable[x] = temp;
        }

    }

    while(1)
    {
        printf("What do you want to search? or press e to exit: ");
        char* searchStr = GetString();
        if (searchStr == NULL)
        {
            free(searchStr);
            return 1;
        }
        if ( strcmp(searchStr, "e") == 0 )
        {
            free(searchStr);
            break;
        }
        int x = hash(searchStr);
        searchHT(HashTable, x, searchStr);
        free(searchStr);
    }

    ShowHash(HashTable);
    for (int i = 0; i < HASH_MAX; i++)
    {
        free(HashTable[i]);
    }

    //free(a);
    return 0;
}

unsigned int hash(char* string)
{
    char* temp_string = malloc(sizeof(string));
    if (temp_string == NULL)
    {
        printf("Error. Not enough space i guess. Sorry.\n");
        return -1;
    }
    strcpy(temp_string, string);
    for (int i = 0; temp_string[i] != '\0'; i++)
    {
        temp_string[0] = (temp_string[0] + temp_string[i]) % 127;
        temp_string[0] %= (HASH_MAX - 1);
    }
    unsigned int x = temp_string[0];
    free(temp_string);
    return x;
}

hNode* create(char* word)
{
    hNode* X = malloc(sizeof(hNode));
    if (X == NULL)
    {
        printf("Error. Not enough space i guess. Sorry.\n");
        return NULL;
    }
    X->string = word;
    X->pnext = NULL;
    return X;
}

void searchHT(hNode* Table[], int a, char* word)
{
    hNode* crawl = NULL;
    crawl = Table[a];
    while (crawl != NULL)
    {
        if ( strcmp(crawl->string, word) == 0 )
        {
            printf("Found!\n");
            return;
        }
        crawl = crawl->pnext;
    }
    printf("Not Found!\n");
    return;
}

void ShowHash(hNode* Table[])
{
    hNode* crawl = NULL;
    for (int i = 0; i < HASH_MAX; i++)
    {
        crawl = Table[i];
        while (crawl != NULL)
        {
            DEBUG(1, "[ %p->%s->%p ]--->", crawl, crawl->string, crawl->pnext);
            // To keep it clean
            printf("(%s)--->", crawl->string);
            crawl = crawl->pnext;
        }
        if (crawl != NULL)
            printf("\n");
        else printf("(NIL)\n");
    }
    return;
}
