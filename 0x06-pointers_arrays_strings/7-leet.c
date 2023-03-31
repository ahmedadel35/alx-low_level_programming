#include <stdio.h>
#include <string.h>

/**
 * leet - will do
 * Description: 'the program's description'
 *
 * @str: we
 * Return: desr
 */
char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_code = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < strlen(letters); j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_code[j];
				break;
			}
		}
	}
	return (str);
}
