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
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is %d ", n, lastDigit);

	if (lastDigit > 5)
	{
		puts("and is greater than 5");
	}
	else if (n == 0)
	{
		puts("and is 0");
	}
	else if (n < 6 && n != 0)
	{
		puts("and is less than 6 and not 0");
	}

	return (0);
}
