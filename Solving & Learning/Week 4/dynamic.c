/*
 *
 * Dynamic memory allocation
 *
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int* array = malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
        array[i] = GetInt();

    for (int i = 0; i < 10; i++)
        printf("%d\t", array[i]);
    printf("\n");
}
