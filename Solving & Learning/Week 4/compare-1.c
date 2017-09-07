#include <stdio.h>
#include <cs50.h>
#include <strings.h>
#include <string.h>

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

    if (s != NULL && t != NULL)
    {
        printf("Ignoring case, ");
        if (strcasecmp(s, t) == 0)
            printf("Yo.\n");
        else
            printf("No.\n");

        printf("Considering case, ");
        if (strcmp(s, t) == 0)
            printf("Yo.\n");
        else
            printf("No.\n");
    }
}
