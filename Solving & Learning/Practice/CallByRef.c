#include <stdio.h>
#include <cs50.h>

void changeArray(int array[10]);

int main(void)
{
    int array1[10];

    for(int i = 0; i < 10; i++)
    {
        array1[i] = i + 1;
    }

    changeArray(array1);

    for(int i = 0; i < 10; i++)
    {
        printf("%i ", array1[i]);
    }
}

void changeArray(int array[10])
{
    array[0] = 2;
}
