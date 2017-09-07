#include <stdio.h>
#include <cs50.h>

int main (void)
{

    FILE* f1 = fopen("testF.txt", "r");
    if (f1 == NULL)
    {
        printf("Sorry, couldn't open\n");
        return 1;
    }

    char output[512];
    for (int i = 0; fgets(output, sizeof(output), f1) != NULL; i++)
        printf("Line %02d:%s", i, output);
    if (feof(f1))
        printf("True\n");
    else
        printf("False\n");

}
