#include <stdio.h>
#include "cs50.h"

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void print1DArray(int arr[], int sizeOfArray)
{
    printf("\n");
    for(int i = 0; i < sizeOfArray; i++)
        printf("%i  ", arr[i]);
    printf("\n");
}


void print2DArray(int m, int n, int arr1[m][n])
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            printf(" %i %i : %i", i, j, arr1[i][j]);
        printf("\n");
    }

}

int main(void)
{
    printf("Enter please : ");
    int n = 8;
    int troops[n];
    int *a, *b;

    for(int i = 0; i < n; i++)
        troops[i] = GetInt();

    for(int i = 0; i < n; i+=2)
    {
        if (troops[i] > troops[i + 1])
        {
            a = &troops[i]; b = &troops[i + 1];
            swap(a, b);
        }

    }

    print1DArray(troops, n);

    int rows = 4; int column = 2;
    int Subtroop[rows][column];

    for(int i = 0, x = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
            Subtroop[i][j] = troops[x++];
    }

    print2DArray(rows, column, Subtroop);
    printf("\n");

    for(int k = 0; k <= 2; k+=2)
    {
        for(int i = 0; i < 2; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                if (Subtroop[k][i] > Subtroop[k + 1][j])
                {
                    a = &Subtroop[k][i]; b = &Subtroop[k + 1][j];
                    swap(a, b);
                }
            }
        }
    }

    print2DArray(rows, column, Subtroop);
    printf("\n");


    //a = &rows; b = &column;
    //swap(a, b);
    //int Subtroop_1[rows][column];

    /*for(int i = 0, x = 0; i < rows; i++)
    {
        for(int j = 0; j < column; j++)
        {
            troops[x++] = Subtroop[i][j];
        }
    }*/

    //print1DArray(troops, n);



    return 0;
}
