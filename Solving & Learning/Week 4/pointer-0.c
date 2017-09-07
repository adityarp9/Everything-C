// Hacker edition
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char* name = GetString();

    while (*name != '\0')
    {
        printf("%c\n", *(name++));
    }
}
