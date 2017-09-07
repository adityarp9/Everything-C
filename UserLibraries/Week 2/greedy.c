#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    printf("Enter the amount you want the change for in dollars?\n");
    float dollars = GetFloat();
    float roundedAmt = round(dollars);
    int coins = 0;

    printf("%f\n", roundedAmt);


    while( roundedAmt > 25 )
    {
        roundedAmt = roundedAmt % 25;
        coins++;
    }

    while( roundedAmt > 10 )
    {
        roundedAmt = roundedAmt % 10;
        coins++;
    }

}
