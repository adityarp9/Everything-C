#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string name;

    printf("Type in your name:\n");
    name = GetString();

    /*for(int i = 0, n = strlen(name); i < (n + 500000); i++)
    {
        printf("%c\n", name[i]);
    }
    //Segmentation fault (core dumped)*/

    if (name != NULL)
    {
        for(int i = 0, n = strlen(name); i < (n + 500000); i++)
        {
            if (name != NULL)
            printf("%c\n", name[i]);
        }
    }    
}
