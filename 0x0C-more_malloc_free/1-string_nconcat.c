#include <stdlib.h> /* for malloc and free functions */
#include <string.h> /* for strlen and strncpy functions */

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Use the entire s2 string if n is greate */
	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc(sizeof(char) * (s1_len + n + 1));

	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 and the first n bytes of s2 into the new string */
	strncpy(concat_str, s1, s1_len);
	strncpy(concat_str + s1_len, s2, n);

	/* Add the null terminator */
	concat_str[s1_len + n] = '\0';

	return (concat_str);
}
