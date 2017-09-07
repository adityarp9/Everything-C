#include <stdio.h>
#include <cs50.h>
//#include <string.h>
#include <ctype.h>

int main(void)
{
    char* name = GetString();
    char* cName = name;

    *cName = toupper(*cName);
    printf("Original: %s\n", name);
    printf("Correct: %s\n", cName);
}
