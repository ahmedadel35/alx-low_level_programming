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
	int chr;

	for (chr = 'z'; chr >= 'a'; chr--)
	{
		putchar(chr);
	}

	putchar('\n');

	return (0);
}
