#include <stdio.h>
#include <cs50.h>

#include "struct.h"
#define NoOfPlayers 3

int main(void)
{
    player barca[NoOfPlayers];

    printf("Begin\n");

    for (int i = 0; i < NoOfPlayers; i++)
    {
        printf("\nPlayer %d\nName of the player: ", i + 1);
        barca[i].name = GetString();

        printf("\nCountry: ");
        barca[i].country = GetString();

        printf("\nClub: ");
        barca[i].club = GetString();

        printf("\nAge: ");
        barca[i].age = GetInt();

        printf("Player description:\n%s is aged %d and plays for both country %s and club %s.\n", barca[i].name, barca[i].age, barca[i].country, barca[i].club);

        free(barca[i].name);
        //free(barca[i].age);
        free(barca[i].country);
        free(barca[i].club);

    }
}
