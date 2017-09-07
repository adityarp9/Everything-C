#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string str1;

    printf("Type in a string : \n");
    str1 = GetString();

    if(str1 != NULL)
    {
        for(int i = 0, n = strlen(str1); i < n; i++)
        {
            if (str1[i] >= 'a' && str1[i] <= 'z')
            {
                printf("%c", str1[i] - ('a' - 'A'));
            }
            else if(str1[i] >= 'A' && str1[i] <= 'Z')
            {
                printf("%c", str1[i] + ('a' - 'A'));
            }
            else
                printf("%c", str1[i]);
        }
    }
    printf("\n");
}
