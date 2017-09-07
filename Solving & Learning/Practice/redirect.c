#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string input = GetString();
    printf("This output has been redirected by :- %s\n", input);
    string input2 = GetString();
    //printf("This output has been redirected by :- %s\n", input2);
}
