#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to process
 *
 * Return: length of the string s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
