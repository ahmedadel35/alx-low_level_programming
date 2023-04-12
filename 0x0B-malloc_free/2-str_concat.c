#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 *         If s1 or s2 is NULL, it's treated as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str = NULL;
	size_t len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concat_str = malloc(len_s1 + len_s2 + 1);

	if (concat_str == NULL)
	{
		return NULL;
	}

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

	return (concat_str);
}