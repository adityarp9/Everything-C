#include <stdio.h>
#include <cs50.h>

int shift(int end, int nOt, int array[])
{
    int l = 1, i = 1;
    for (i = end; l <= nOt; i--)
    {
        array[i + 1] = array[i];
        l++;
    }
    return i;
}

int main (void)
{
    int n = 8, list[n];

    printf("Enter the n elements:\n");

    for (int i = 0; i < n; i++)
        list[i] = GetInt();

    printf("Unsorted array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");

    int temp = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(list[i] > list[i + 1])
        {
            temp = list[i + 1];
            for (int j = 0; j <= i; j++)
            {
                if (list[i + 1] < list[j])
                {
                    list[shift(i , i + 1 - j, list) + 1] = temp;

                }
                else if (list[j] < list[i + 1] && list[j + 1] > list[i + 1])
                {
                    list[shift(i, i - j, list) + 1] = temp;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", list[i]);
    printf("\n");
}
