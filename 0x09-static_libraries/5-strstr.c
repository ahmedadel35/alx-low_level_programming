#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to be located
 *
 * Return: pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *p = haystack;
		char *q = needle;

		while (*q && *p == *q)
		{
			p++;
			q++;
		}

		if (!*q)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
