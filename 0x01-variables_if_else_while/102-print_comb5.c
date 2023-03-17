#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (j * 100 + i < i * 100 + j)
			{
				continue;
			}
			k = i / 10;
			putchar(k + '0');
			k = i % 10;
			putchar(k + '0');
			putchar(' ');
			k = j / 10;
			putchar(k + '0');
			k = j % 10;
			putchar(k + '0');
			if (i != 99 || j != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
