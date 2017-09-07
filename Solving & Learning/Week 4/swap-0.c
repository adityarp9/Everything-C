// Pointer swapping!

#include <stdio.h>
#include <cs50.h>

void swap(int* a, int* b);

int main(void)
{
    int x = 1, y = 2;

    printf("x is %d.\ny is %d.\n", x, y);

    printf("Swapping...\n");
    swap(&x, &y);
    printf("Swapped!\n");
    printf("x is %d.\ny is %d.\n", x, y);
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}
