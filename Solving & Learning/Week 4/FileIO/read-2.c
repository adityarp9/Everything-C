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

    FILE *fpoint2 = fopen(argv[1], "w+");

    char* thought = "Hi";

    fprintf(fpoint2, "%s\n", thought);

    int x;
    while ((x = fgetc(fpoint2)) != EOF)
        putchar (x);
    fclose(fpoint2);

}
