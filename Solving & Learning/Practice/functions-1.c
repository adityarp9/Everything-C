#include <stdio.h>
#include <cs50.h>

double addSomeFloat(double a, double b)
{
    return a + b;
}

int main(void)
{
    printf("Enter some floats, pal ?\n");
    double x, y;
    scanf("%lf%lf", &x, &y);
    printf("%.10lf\n", addSomeFloat(x, y));
    return 0;
}
