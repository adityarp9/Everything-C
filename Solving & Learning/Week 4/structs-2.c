#include <stdio.h>
#include <cs50.h>

#include "structs-2.h"

int main(void)
{
    struct person myself;

    myself.name = "xyz";
    myself.mindset = "calm";
    myself.relegion = "humanity";
    myself.language = "love";

    printf("%s\n", myself.name);

    struct person *mybro = malloc(sizeof(struct person));

    (*mybro).name = "abc";
    mybro -> mindset = "cool";

    printf("%s\n%s\n", (*mybro).name, mybro -> mindset);

    laptop ourlaptop;

    ourlaptop.machName = "HP Probook 440 G2";

    printf("%s\n", ourlaptop.machName);
}
