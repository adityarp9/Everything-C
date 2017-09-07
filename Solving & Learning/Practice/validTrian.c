#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>

bool validTrianCheck(double l, double m, double n);

int main(void)
{
    double x, y, z;
    do
    {
        printf("Input the 3 sides of the triangle seperated by a space : ");
        x = GetDouble(); y = GetDouble(); z = GetDouble();
    }
    while(x < 0 || y < 0 || z < 0);

    bool b = validTrianCheck(x, y, z);
    printf(b ? "true\n":"false\n");

}
bool validTrianCheck(double l, double m, double n)

{
    bool a;
    if ((l + m) < n)
    {
        return false;
        //printf(a ? "true\n":"false\n");
    }
    else
    {
        return true;
        //printf(a ? "true\n":"false\n");
    }
}
