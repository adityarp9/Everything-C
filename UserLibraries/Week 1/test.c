#define _XOPEN_SOURCE 500

#include <stdio.h>
#include <cs50.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int x = GetInt();
    usleep(500000);
    printf("%2d\n", x);
}
