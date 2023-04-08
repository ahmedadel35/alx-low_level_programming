#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*p == *s)
			{
				return (s);
			}

			p++;
		}

		s++;
	}

	return (NULL);
}
