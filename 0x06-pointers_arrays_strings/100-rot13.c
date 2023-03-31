#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * rot13 - will do
 * Description: 'the program's description'
 *
 * @str: we
 * Return: desr
 */
char *rot13(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			for (j = 0; j < 13; j++)
			{
				if (
					(
						str[i] >= 'a' && str[i] < 'z') ||
					(str[i] >= 'A' && str[i] < 'Z'))
				{
					str[i]++;
				}
				else if (str[i] == 'z')
				{
					str[i] = 'a';
				}
				else if (str[i] == 'Z')
				{
					str[i] = 'A';
				}
			}
		}
	}
	return (str);
}
