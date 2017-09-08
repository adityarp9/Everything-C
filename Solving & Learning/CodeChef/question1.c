#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort(int list[][2], int n)
{
	int swap, j = 0;

	while (swap != 0)
	{
		swap = 0;
		for(int i = 0; i < n - 1 - j; i++)
		{
			if (list[i][1] < list[i + 1][1])
			{
				int temp = list[i][1];
				list[i][1] = list[i + 1][1];
				list[i + 1][1] = temp;

				int temp1 = list[i][0];
				list[i][0] = list[i + 1][0];
				list[i + 1][0] = temp1;
			}
		}
		j++;
	}
}
int compareNum(char*, char*);

int main(void)
{
	// Implement a dictionary
	//char x[8];

	printf("Enter the number of strings to input?\n");
	int n;
	scanf ("%d", &n);

	char words[n][8];
	printf("Words:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%s", words[i]);
	}
char y[n][8];
	int keystrokes[n];
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; words[i][j] != '\0'; j++)
		{
			if (words[i][j] >= 'a' && words[i][j] <= 'c')
			{
					y[i][j] = '2';
			}
			else if (words[i][j] >= 'd' && words[i][j] <= 'f')
			{
					y[i][j] = '3';
			}
			else if (words[i][j] >= 'g' && words[i][j] <= 'i')
			{
					y[i][j] = '4';
			}
			else if (words[i][j] >= 'j' && words[i][j] <= 'l')
			{
				  y[i][j] = '5';
			}
			else if (words[i][j] >= 'm' && words[i][j] <= 'o')
			{
					y[i][j] = '6';
			}
			else if (words[i][j] >= 'p' && words[i][j] <= 's')
			{
					y[i][j] = '7';
			}
			else if (words[i][j] >= 't' && words[i][j] <= 'v')
			{
					y[i][j] = '8';
			}
			else if (words[i][j] >= 'w' && words[i][j] <= 'z')
			{
					y[i][j] = '9';
			}
			y[i][j + 1] = '\0';
		}
		printf("\n");

		keystrokes[i] = atoi(y[i]);
		/*printf("%d\n", keystrokes[i]);*/
	}
  int finalkey[n][2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 1; j++)
		{
			finalkey[i][j] = keystrokes[i];
			finalkey[i][j + 1] = 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
			for (int j = 0; j < 2; j++)
				printf("%d\n", finalkey[i][j]);
	}
	for(int i=0; i<n; i++)
	{
		int count=0;
        for(int j=0; j<n; j++)
		{
            if ( (j != i) && compareNum(y[i], y[j]) )
                count++;
		}
		finalkey[i][1] = count;
	}

	for (int i = 0; i < n; i++)
	{
			for (int j = 0; j < 2; j++)
				printf("%d\n", finalkey[i][j]);
	}
	sort(finalkey, n);
    //printf;
}


int compareNum(char* a, char* b)
{
	int i = 0;
	while(a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
			return 0;
			i++;
	}
	return 1;
}
