//Quick Sort

#include <stdio.h>
#include "cs50.h"

void swapInt(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Partition(int array[],int lme,int pivot)
{
    int wall = lme - 1, *a, *b;

    for (int j = lme; j < pivot; j++)
    {
        if (array[j] <= array[pivot])
        {
            wall++;
            a = &array[j]; b = &array[wall]; swapInt(a, b);
        }
    }
    a = &array[wall + 1]; b = &array[pivot]; swapInt(a, b);
    return wall + 1;
}

void QuickSort(int array[], int lme, int pivot)
{
    int q;
    if (lme < pivot)
    {
        q = Partition(array, lme, pivot);
        QuickSort(array, lme, q - 1);
        QuickSort(array, q + 1, pivot);
    }
}

int main (void)
{
    int n = 9, list[n];

    printf("Enter the n elements:\n");

    for (int i = 0; i < n; i++)
        list[i] = GetInt();

    printf("Unsorted list:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");

    int lme = 0;

    QuickSort(list, lme, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");

}
