#include <stdio.h>
#include <cs50.h>

#include "struct.h"
#define NoOfPlayers 2

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

    /**    FILE* file = fopen("Fifa.csv", "a");
        if (file != NULL)
        {
                //for (int i = 0; i < NoOfPlayers; i++)
                    fprintf(file, "%s, %s, %s\n", barca[i].name, barca[i].country, barca[i].club);
        }
    **/

    }

    FILE* file = fopen("Fifa.csv", "w");
    if (file != NULL)
    {
        for (int i = 0; i < NoOfPlayers; i++)
        {
            fprintf(file, "%s, %s, %s\n", barca[i].name, barca[i].country, barca[i].club);
            free(barca[i].name);
            //free(barca[i].age);
            free(barca[i].country);
            free(barca[i].club);
        }
    }
}
