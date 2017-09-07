#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage:./read-1 fileName.txt\n");
        return 1;
    }

    FILE *fpoint = fopen(argv[1], "w");
    FILE *fpoint2 = fopen(argv[1], "r");

    while (true)
    {
        printf("Enter your thoughts or type \"quit\" to exit\n");
        char* thought = GetString();
        if (thought != NULL && strcmp(thought, "quit") == 0)
            break;
        else if (thought != NULL)
            fprintf(fpoint, "%s\n", thought);
            free(thought);
    }
    fclose(fpoint);
    char op[512];
    for (int i = 0; fgets(op, sizeof(op), fpoint2) != NULL; i++)
    {
        printf("Line %02d:%s", i + 1, op);
    }
    fclose(fpoint2);

}
