#include <stdio.h>

/**
 * _strcpy - check the code
 *
 * Description: 'the program's description'
 *
 * @dest: the
 * @src: we
 * Return: desr
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
