#include <stdio.h>
#include <stdlib.h>

//#include "structuresW5.h"
typedef struct nodes
{
    int value;
    struct nodes* pnext;
}
node;

int main(void)
{
    char *a;
    scanf("%s", a);
    printf("%s\n", a);
    return 0;
}
