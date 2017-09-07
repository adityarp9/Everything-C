#include <stdio.h>
#include "cs50.h"

int main (void)
{
    int n = 6, list[n];

    printf("Enter the n elements:\n");

    for (int i = 0; i < n; i++)
        list[i] = GetInt();

    printf("Unsorted list:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");

    int temp, j;

    for (int i = 1; i < n; i++)
    {
        if (list[i] < list[i - 1])
        {
            temp = list[i];
            j = i;

            while (j > 0 && temp < list[j - 1])
            {
                list[j] = list[j - 1];
                j--;
            }

            list[j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");
}
