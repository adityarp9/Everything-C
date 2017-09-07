#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char* s;
    char* t;

    printf("Say something: ");
    s = GetString();
    printf("%s\n", s);

    printf("Say something: ");
    t = GetString();
    printf("%s\n", t);

    if (s == t)
        printf("Yo\n");
    else
        printf("No\n");
}
