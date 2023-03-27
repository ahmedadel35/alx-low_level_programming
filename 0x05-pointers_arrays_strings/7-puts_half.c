#include <stdio.h>
#include <string.h>

/**
 * puts_half - check the code
 *
 * Description: 'the program's description'
 *
 * @str: the
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start;
	int i;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2;
	}

	for (i = start; i < length; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
