#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char msg[25];
    printf("Type up to 25 characters and then press Enter...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); //Outputs a single character
        if (msg[i] == '\n')
        {
            i--;
            break;
        }
    }
    putchar('\n'); // One line break after the loop is done.
    for (; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');
    return(0);
}
