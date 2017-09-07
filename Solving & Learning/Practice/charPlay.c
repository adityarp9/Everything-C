#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("Type in your name:\n");

    string name = "ameya";
    name = GetString();

    printf("%s\n", name);
}
