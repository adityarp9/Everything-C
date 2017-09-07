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


int main(int argc, char* argv[])
{

    /** Check if argv[1] is a valid argument i.e argc < 2 and argv[1] is not left empty! **/
    if( argv[1] == NULL || argc > 2 )
    {
        printf("Please input a valid argument after the ./abc(example) in the command prompt. You did not do so this time. Try again if you wish BUB !\n");
        exit(1);
    }


    printf("Hey, enter the string to be encrypted :- ");
    string NormalText = GetString();
    int n = strlen(NormalText);
    char KeyText[n]; //String key text

    /** This is just a setup BUB! **/
    for(int i = 0/*Key string iterator*/, x = 0 /*argv string iterator*/ , m = strlen(argv[1]); i < n; i++)
    {
        if( isAlphabet(NormalText[i]) && isupper(NormalText[i]) )
            KeyText[i] = toupper(argv[1][x++ % m]);
        else if( isAlphabet(NormalText[i]) && islower(NormalText[i]) )
            KeyText[i] = tolower(argv[1][x++ % m]);
        else
            KeyText[i] = NormalText[i];
    }
    KeyText[n] = '\0';


    /**Encryption begins!**/
    char EncryptedText[n];

    for(int i = 0; i < n; i++)
    {
        if( isAlphabet(NormalText[i]) && isupper(NormalText[i]) )
        {
            EncryptedText[i] = ( (int)KeyText[i] + (int)NormalText[i] - 130 ) % 26;
            EncryptedText[i] += 65;
        }
        else if( isAlphabet(NormalText[i]) && islower(NormalText[i]) )
        {
            EncryptedText[i] = ( (int)KeyText[i] + (int)NormalText[i] - 194 ) % 26;
            EncryptedText[i] += 97;
        }
        else
            EncryptedText[i] = NormalText[i];
    }
    EncryptedText[n] = '\0';

    puts(NormalText);
    puts(KeyText);
    puts(EncryptedText);
}
