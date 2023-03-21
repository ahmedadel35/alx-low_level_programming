#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table starting from 0.
 * @n: The number of times to print.
 *
 * Description: This function takes an integer `n` as its argument and prints
 * the n times table starting from 0. If `n` is greater than 15 or less than 0,
 * the function does not print anything. The function uses nested loops to
 * generate the table and prints each row using the `printf()` function.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d", i * j);
			if (j < n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
