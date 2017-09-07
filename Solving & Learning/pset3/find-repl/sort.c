/**
 * Source code for all the functions of sort.h
 * This file simply contains all basic sorting algorithms
 */


#include "sort.h"
#include <cs50.h>

// Bubble Sort
void bubbleSort(int values[], int n)
{
    int swaps, x = n;
    do
    {
        swaps = 0;
        for (int i = 0; i < x - 1; i++)
        {
            if (values[i] > values[i + 1])
            {
                swaps = 1;
                int temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
            }
        }
        x--;
    }
    while (swaps != 0);

    return;
}

// Selection Sort
void selectionSort(int values[], int n)
{
    int small = values[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[i])
            {
                small = values[j];
                int temp = values[i];
                values[i] = values[j];
                values[j] = temp;
            }
        }
    }

    return;
}

// Insertion Sort
void insertionSort(int values[], int n)
{
    int temp, j;

    for (int i = 1; i < n; i++)
    {
        if (values[i] < values[i - 1])
        {
            temp = values[i];
            j = i;

            while (j > 0 && temp < values[j - 1])
            {
                values[j] = values[j - 1];
                j--;
            }

            values[j] = temp;
        }
    }
}

// Quick Sort
int partition(int values[],int lme,int pivot)
{
    int wall = lme - 1;

    for (int j = lme; j < pivot; j++)
    {
        if (values[j] <= values[pivot])
        {
            wall++;
            int temp = values[pivot];
            values[pivot] = values[j];
            values[j] = temp;
        }
    }
    int temp = values[pivot];
    values[pivot] = values[wall + 1];
    values[wall + 1] = temp;
    return wall + 1;
}

void quickSort(int values[], int lme, int pivot)
{
    int q;
    if (lme < pivot)
    {
        q = partition(values, lme, pivot);
        quickSort(values, lme, q - 1);
        quickSort(values, q + 1, pivot);
    }
}
