#include <stdio.h>
#include <string.h>

/**
 * puts2 - check the code
 *
 * Description: 'the program's description'
 *
 * @str: the
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i < length; i += 2)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
