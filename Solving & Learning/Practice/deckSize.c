#include <stdio.h>

#define DECK_SIZE 52
void cardReverse(int);

int main()
{
    //int cardDeck[DECK_SIZE];

    for(int i = 0; i < DECK_SIZE; i++)
    {
        printf("This is card : %i\n", i);
    }
    //DECK_SIZE++;
    cardReverse(DECK_SIZE);
}

void cardReverse(int a)
{
    //DECK_SIZE = a;
    for(int i = DECK_SIZE - 1; i >= 0; i--)
    {
        printf("This is card : %i\n", i);
    }
}
