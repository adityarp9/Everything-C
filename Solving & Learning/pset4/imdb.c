#include <stdio.h>
#include <cs50.h>
#include "sort.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("%s NumberOfMovies\n", argv[0]);
		return 1;
	}

	printf("Welcome to IMDB ratings panel.\n");
	// Movies' array/list.
	int n = atoi(argv[1]);
	char* movies[n];
	
	printf("Enter your %d favorite movies:\n", n);
	for (int i = 0; i < n; i++)
	{
		movies[i] = GetString();
		if (movies[i] == NULL)
		{
			printf("Error. Sorry. Please try again.\n");
			return 2;
		}
	}
	float rating[n];
	printf("So let's begin the rating, in the scale of -> 0.0 to 10.0\n");
	for (int i = 0; i < n; i++)
	{
		printf("How would you rate the \"%s\" ? : ", *(movies + i));
		do
		{
			rating[i] = GetFloat();
		}
		while (rating[i] < 0 || rating[i] > 10);
		putchar('\n');
	}
	movieSort(movies, rating, n);
	printf("So here goes your rating : \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d.%s : %.1f\n", i + 1, *(movies + i), *(rating + i));
	}
	printf("Thank you for rating!\n");
	return 0;
}
