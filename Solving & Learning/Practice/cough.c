#include <stdio.h>
#include <cs50.h>

void WarCry(string word, int n);

int main(int argc, string argv[])
{
    for(int i = 1; i < argc; i++)
    {
        if(argv[i] != NULL)
            WarCry(argv[i], argc);
    }
}

void WarCry(string word, int n)
{
    for(int i = 1; i < n; i++)
    {
        printf("%s\n", word);
    }
}
