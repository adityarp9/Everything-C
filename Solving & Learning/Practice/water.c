#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes did you take a shower today, sir?\n");
    int minutes = GetInt();
    printf("Minutes : %i\n", minutes);

    /* In shower, water used
     * in 1 minute : 1.5 gallons
     * 1 gallon    : 128 ounces
     * 1 bottle    : 16 ounces
    */

    int NoOfBottles = 0;

    NoOfBottles = (minutes * 192) / 16;

    printf("Bottles : %i\n", NoOfBottles);
}
