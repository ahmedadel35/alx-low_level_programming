#include <stdio.h>

/**
 * _strncpy - up to n characters from
 * src string to the end of the dest string.
 * Adds a null terminator to the end of dest.
 *
 * @dest: asd
 * @src: sd
 * @n: asd
 * Returns a pointer to the start of dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
