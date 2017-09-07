#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char* fan = GetString();

    if (fan == NULL)
    {
        return 1;

    }
    for (int i = 0, n = strlen(fan); i < n; i++)
        printf("%c\n", *(fan + i));

    return 0;
}
