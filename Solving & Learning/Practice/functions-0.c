#include <stdio.h>
#include <cs50.h>

void AddTwoNos(int, int);
void AddTwoNos(float, float);

int main(void)
{
    printf("Input 3 numbers please: \n");

    int n = GetInt();
    int x = GetInt();

    AddTwoNos(n,x);
}

void AddTwoNos(int x, int y)
{
    printf("%d\n", x + y);
}

void AddTwoNos(float x, float y)
{
    printf("%f\n", x + y);
}
