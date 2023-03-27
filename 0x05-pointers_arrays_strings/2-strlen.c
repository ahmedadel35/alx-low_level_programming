#include <stdio.h>

/**
 * _strlen - check the code
 *
 * Description: 'the program's description'
 *
 * @s: the
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0') {
		i++;
		s++;
	}

	return (i);
}
