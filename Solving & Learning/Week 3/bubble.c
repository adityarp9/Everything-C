#include <stdio.h>
#include <cs50.h>

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

    int swap, j  = 0;

    while(swap != 0)
    {
        swap = 0;

        for(int i = 0; i < n - 1 - j; i++)
        {
            if (list[i] > list[i + 1])
            {
                swap++;
                a = &list[i]; b = &list[i + 1];
                swapInt(a, b);
              }
        }
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\nswap = %d\n", swap);

    return 0;
}
