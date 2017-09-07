// Hacker edition-2 of copy-1
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
    int i = 0;
    while (*(name + i) != '\0')
    {
        *(cName + i) = *(name + i);
        i++;
    }
    *(cName + i) = '\0';

    if(strlen(cName) > 0)
    {
        cName[0] = toupper(cName[0]);
        printf("Original: %s\n", name);
        printf("Correct: %s\n", cName);
    }
}
