#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		puts("is positive");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	else
	{
		puts("is zero");
	}

	return (0);
}
