#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to which src will be appended
 * @src: string to be appended to dest
 * @n: maximum number of characters to be appended
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p)
		p++;

	while (n-- && (*p++ = *src++))
		;

	if (*(p - 1) != '\0')
		*p = '\0';

	return (dest);
}
