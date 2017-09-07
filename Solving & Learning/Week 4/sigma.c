#include <stdio.h>
#include <cs50.h>

int sigma(int m);

int main(void)
{
    printf("Provide an integer?\n");
    int x = GetInt();


    int sum = sigma(x);
    printf("%d\n", sum);
    return 0;
}

int sigma(int m)
{
    if (m < 1)
        return 0;
    else
        return m + sigma(m - 1);
}
