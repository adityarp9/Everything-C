#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //printf("Sir, what is your name?\n");
    string name;
    do
    {
        name = GetString();
    }
    while( ((int)name[0] < 65) || ((int)name[0] < 97 && (int)name[0] > 92) || ((int)name[0] > 127) );

    int x = 1;
    if(name != NULL)
    {
        for(int i = 0, n = strlen(name); i < n; i++)
        {
            if(name[i] == ' ')
            {
                name[x++] = toupper(name[i + 1]);
            }
        }

        for(int i = x, n = strlen(name); i < n; i++)
            name[i] = ' ';
    }

    puts(name);

}
