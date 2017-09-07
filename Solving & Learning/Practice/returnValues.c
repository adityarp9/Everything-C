#include <stdio.h>
#include <cs50.h>

int sentinelsAreHere(int a)
{
    if (a < 0)
        return -1;
    else
        return 0;
}

int main(void)
{
    printf("Give it to me! I mean int? :D\n");
    int x = GetInt();
    printf("%i\n", sentinelsAreHere(x));
}
