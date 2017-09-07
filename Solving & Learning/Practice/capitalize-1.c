#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    string str1;

    printf("Type in a string : \n");
    str1 = GetString();

    if(str1 != NULL)
    {
        for(int i = 0, n = strlen(str1); i < n; i++)
        {
            printf("%c", toupper(str1[i]));
        }
    }
    printf("\n");
}
