#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * Description: 'the program's description'
 *
 * @s: the
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}

	printf("\n");
}
