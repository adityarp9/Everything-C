#include <stdio.h>
#include <cs50.h>

void swap(int *a, int *b)
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
    int small = list[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (list[j] < list[i])
            {
                small = list[j];
                a = &list[j]; b = &list[i];
                swap(a, b);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");
    return 0;

}
