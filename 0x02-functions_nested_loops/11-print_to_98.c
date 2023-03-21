#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 *
 * Description: This function takes an integer `n` as
 * its argument and prints
 * all natural numbers from `n` to 98, separated by commas
 *  and followed by a new
 * line. The function first checks whether `n` is less
 * than or equal to 98, and
 * then uses a for loop to print the numbers from `n`
 *  98 in ascending or
 * descending order, depending on whether `n` is less than
 *  or greater than 98.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
