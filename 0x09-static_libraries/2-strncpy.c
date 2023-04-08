#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: buffer to copy string to
 * @src: string to be copied
 * @n: maximum number of characters to be copied
 *
 * Return: pointer to the destination buffer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n-- && *src)
		*p++ = *src++;

	if (*(p - 1) != '\0')
		*p = '\0';

	return (dest);
}
