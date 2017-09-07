#include <stdio.h>
#include "cs50.h"

void swapInt(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}


int main (void)
{
    int *a, *b;
    int n = 8, list[n];

    printf("Enter the n elements:\n");
    for (int i = 0; i < n; i++)
    {
        list[i] = GetInt();
    }
    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    int swaps = 0, j  = 0;

    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (list[i] > list[i + 1])
            {
                swaps = 1;
                int temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;
            }
            n--;
        }
    }
    while (swaps != 0);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\nswaps = %d\n", swaps);

    return 0;
}
