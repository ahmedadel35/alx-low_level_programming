#include <stdio.h>
#include "main.h"

/**
 * add - Add two integers and return the result.
 * @a: The first integer to be added.
 * @b: The second integer to be added.
 *
 * Return: The sum of the two integers.
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
