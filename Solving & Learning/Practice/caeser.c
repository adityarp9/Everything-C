#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool isAlphabet(char ch)
{
    if( ch > 64  )
    {
        if( ch < 91 )
            return true;
        else
        {
            if( ch > 96 )
            {
                if( ch < 123)
                    return true;
                else
                    return false;
            }
            else
                return false;
        }
    }
    else
        return false;
}


int main(int argc, string argv[])
{
    if( argv[1] == NULL || isAlphabet(argv[1][0]) || argc > 2 )
    {
        printf("Please input a valid argument after the ./abc(example) in the command prompt. You did not do so this time. Try again if you wish BUB !\n");
        exit(1);
    }
    else
    {
        int key = atoi(argv[1]);

        printf("Sir, please input the data that needs to be encrypted :- ");

        string NormalText = GetString();
        int n = strlen(NormalText);
        char EncryptedText[n];

        if( NormalText == NULL )
            exit(1);

        printf("\nEncrypting...");

        for(int i = 0; i < n; i++)
        {
            if( isAlphabet(NormalText[i]) && isupper(NormalText[i]) )
            {
                EncryptedText[i] =  ( ( (int)NormalText[i] - 65 ) + key ) % 26;
                EncryptedText[i] += 65;
            }
            else if( isAlphabet(NormalText[i]) && islower(NormalText[i]) )
            {
                EncryptedText[i] =  ( ( (int)NormalText[i] - 97 ) + key ) % 26;
                EncryptedText[i] += 97;
            }
            else
                EncryptedText[i] = NormalText[i];
        }
        EncryptedText[n] = '\0';

        printf("\nEncrypted !\n");

        puts(EncryptedText);

        return 0;

    }
}
