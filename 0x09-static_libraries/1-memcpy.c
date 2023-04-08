#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*p++ = *src++;

	return (dest);
}
