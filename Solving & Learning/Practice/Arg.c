#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    /*
    printf("Hello bub, %s!\n", argv[1]); //Prints 1st element of argv[] array, which is an array of strings.
    */

    /*** Prints out multiple command line strings that you may input
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    ***/

    for(int i = 0; i < argc; i++)
    {
        for(int j = 0, n = strlen(argv[i]); j < n; j++)
        {
            printf("%c\n", argv[i][j]);
        }
        printf("\n");
    }
}
