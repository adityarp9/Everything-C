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

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    if (n < 1)
        return false;
    int start = 0, eol = n - 1;
    while (eol > start)
    {
        int middle = (start + eol) / 2;

        if (values[middle] < value)
            start = middle + 1;
        else if (values[middle] > value)
            eol = middle - 1;
        else if (values[middle] == value)
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
