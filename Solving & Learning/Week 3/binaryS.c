//Binary search
#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = 8, list[n], start = 0, eol = n - 1, middle;

    printf("Enter the n elements:\n");

    for (int i = 0; i < n; i++)
        list[i] = GetInt();

    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");

    printf("What do you want to search? (key)\n");
    int key = GetInt();

    while (eol >= start))
    {
        middle = (start + eol) / 2;

        if ( list[middle] < key )
            start = middle + 1;
        else if ( list[middle] > key )
            eol = middle - 1;
        else if (list[middle] == key)
        {
            printf("Found bubba! Element  is at position %d in the given list.\n", middle + 1);
            break;
        }
        else
        {
            printf("Haha, screwing things are we, you lied champ!\n");
            break;
        }
    }

    return 0;
}
