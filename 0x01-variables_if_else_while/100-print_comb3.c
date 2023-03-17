#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 89; i++)
	{
		if (i < 10)
		{
			putchar(0 + 48);
		}

		putchar((i % 10) + '0');
		/*
		if (i < 9)
		{*/
		putchar(',');
		putchar(' ');
		/*}
		 */
	}

	putchar('\n');

	return (0);
}
