/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

#include "sort.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 1)
        return false;

    for (int i = 0; i < n; i++)
    {
        if (values[i] > value)
        {
            return false;
        }
        if (values[i] == value)
        {
            return true;
        }
    }
    return false;
}
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    quickSort(values, 0, n);

    return;
}
