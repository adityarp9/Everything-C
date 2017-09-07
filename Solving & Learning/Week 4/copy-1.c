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

    for (int i = 0, n = strlen(name); i <= n; i++)
    {
        cName[i] = name[i];
    }

    if(strlen(cName) > 0)
    {
        cName[0] = toupper(cName[0]);
        printf("Original: %s\n", name);
        printf("Correct: %s\n", cName);
    }

}
