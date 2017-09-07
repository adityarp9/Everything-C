#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 1024

int main(int argc, string argv[])
{
    time_t t;
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./fileName n [x]\n");
        return 1;
    }

    int n = atoi(argv[1]);
    if (argc == 3)
    {
        srand48(atoi(argv[2]));
    }
    else
    {
        srand48((long int)time(&t));
    }

    for (int i = 0; i < n; i++)
    {
        printf("%ld\n", (long int) (drand48() * LIMIT));
    }
}
