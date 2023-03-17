#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	for (i = 0; i < (int)strlen(str); i++)
		putchar(str[i]);

	putchar('\n');

	return (1);
}
