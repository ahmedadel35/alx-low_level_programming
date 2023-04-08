#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be set to the value
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
