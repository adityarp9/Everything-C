#include <stdio.h>
#include <cs50.h>

int main (void)
{
    // File pointer
    FILE* fp;
    // To write in a file
    fp = fopen("testF.txt", "w+");

    if (fp == NULL)
    {
        printf("Sorry, couldn't create\n");
        return 1;
    }

    fputs("This is testing fputs", fp);
    fprintf(fp, "\nHello, fprintf here\n");
    fclose(fp);
    free(fp);

}
