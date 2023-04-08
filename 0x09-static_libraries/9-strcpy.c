#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 *           terminating null byte, to the buffer pointed to by dest
 * @dest: buffer to copy string to
 * @src: string to be copied
 *
 * Return: pointer to the destination buffer dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while ((*p++ = *src++))
		;

	return (dest);
}
