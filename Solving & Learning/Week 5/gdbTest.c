/*
 *
 * Testing the gdb debugger.
 *
 */

#include <stdio.h>

int main(void)
{
    int x[] = {1, 2, 3, 4, 5};

    for (int i = 0; i >= 0; i++)
        printf("%i\n", x[i]);

    return 0;    
}
