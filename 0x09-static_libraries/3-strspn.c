#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing the characters to match
 *
 * Return: number of characters in the initial segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p = accept;

	while (*s)
	{
		while (*p && *p != *s)
			p++;

		if (*p)
		{
			n++;
			p = accept;
		}
		else
		{
			break;
		}

		s++;
	}

	return (n);
}
