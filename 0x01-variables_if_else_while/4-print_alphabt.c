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

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		if (chr == 'q' || chr == 'e')
			continue;

		putchar(chr);
	}

	putchar('\n');

	return (0);
}
