#include <stdio.h>

/**
 * _strcmp - up to n characters from
 * src string to the end of the dest string.
 * Adds a null terminator to the end of dest.
 *
 * @s1: asd
 * @s2: sd
 * Returns a pointer to the start of dest.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
