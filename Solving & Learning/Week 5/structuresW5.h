/*
 * Structures for Week 5 codes
 *
 *
 */

// Structure for integer node.
// Used for coding a singly linked list and also a stack.
// Try out CS50's implementation of stack.
typedef struct nodes
{
    int value;
    struct nodes* pnext;
}
node;

typedef struct hashNode
{
    char* string;
    struct hashNode* pnext;
}
hNode;

/*
 * Debugging techniques!
 *
 *
 */

 /*

Way 1: Control Debugging through code itself.
#define DEBUG //Comment this out to turn-off debug statements!
...
main()
{
    ...

    #ifdef DEBUG
        fprintf(....);
    #endif
}

Way 2: Control Debugging through command line.
gcc -D DEBUG program.c
// The above statement is == #define DEBUG

Way 3: Macro to make code readable.
#define DEBUG(fmt, ...) //fprintf(stderr, fmt, __VA_ARGS__)
When debug code isn't needed uncomment out above (commented) part of the line.
...code, functions etc.

DEBUG ("Hashed: %i\n", x);

Way 4: Demonstrated in hashTable.c

*/
