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
	int chr;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}

	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
