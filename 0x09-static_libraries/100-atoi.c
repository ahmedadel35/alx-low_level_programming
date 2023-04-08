#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of converted string
 */
int _atoi(char *s)
{
	int n = 0;

	while (*s)
	{
		n = n * 10 + (*s - '0');
		s++;
	}

	return (n);
}
