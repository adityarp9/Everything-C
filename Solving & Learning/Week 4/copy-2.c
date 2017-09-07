// Hacker edition-1 of copy-1. A bit better one in copy-3.c
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char* name = GetString();

    char* cName = malloc((strlen(name) + 1) * sizeof(char));
    if (cName == NULL)
    {
        free(name);
        return 1;
    }

    for (int i = 0; ; i++)
    {
        if (*(name + i) != '\0')
            *(cName + i) = *(name + i);
        else
        {
            *(cName + i) = '\0';
            break;
        }
    }

    if(strlen(cName) > 0)
    {
        cName[0] = toupper(cName[0]);
        printf("Original: %s\n", name);
        printf("Correct: %s\n", cName);
    }
}
