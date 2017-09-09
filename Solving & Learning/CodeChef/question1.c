/*
	Solved. Check test cases.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct finalK
{
    int kstroke, count;
}
finalKey;

void sort(finalKey *a, int n);

int main(void)
{
    printf("Enter the number of strings to input?\n");
    int n;
    scanf ("%d", &n);
    char words[n][8];
    printf("Words:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);
    char y[n][8];
    finalKey nokia[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; words[i][j] != '\0'; j++)
        {
            if (words[i][j] >= 'a' && words[i][j] <= 'c')
                y[i][j] = '2';
            else if (words[i][j] >= 'd' && words[i][j] <= 'f')
                y[i][j] = '3';
            else if (words[i][j] >= 'g' && words[i][j] <= 'i')
                y[i][j] = '4';
            else if (words[i][j] >= 'j' && words[i][j] <= 'l')
                y[i][j] = '5';
            else if (words[i][j] >= 'm' && words[i][j] <= 'o')
                y[i][j] = '6';
            else if (words[i][j] >= 'p' && words[i][j] <= 's')
                y[i][j] = '7';
            else if (words[i][j] >= 't' && words[i][j] <= 'v')
                y[i][j] = '8';
            else if (words[i][j] >= 'w' && words[i][j] <= 'z')
                y[i][j] = '9';

            y[i][j + 1] = '\0';
        }
        printf("\n");
        nokia[i].kstroke = atoi(y[i]);
    }
    for(int i = 0; i < n; i++)
    {
        nokia[i].count = 0;
        for(int j = 0; j < n; j++)
        {
            if ( nokia[i].kstroke == nokia[j].kstroke )
                nokia[i].count++;
        }
    }
    sort(nokia, n);
    printf("Most used: %d\n", nokia[n - 1].kstroke);
}


void sort(finalKey list[], int n)
{
    finalKey temp; int j;
    for (int i = 1; i < n; i++)
    {
        if (list[i].count < list[i - 1].count)
        {
            temp = list[i];
            j = i;
            while (j > 0 && temp.count < list[j - 1].count)
            {
                list[j] = list[j - 1];
                j--;
            }
            list[j] = temp;
        }
    }
}
