#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * @str: pointer to the string to be duplicated.
 *
 * Return: pointer to the duplicated string, or NULL if it fails.
 *         If str = NULL returns NULL.
 */
char *_strdup(char *str)
{
	char *dup_str = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc(strlen(str) + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}
