#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 *
 * @str: Pointer to the string to count.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int i, count = 0, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			count++;
		}
	}

	return (count);
}

/**
 * copy_word - Copies a word from a string to a new array.
 *
 * @src: Pointer to the source string.
 * @dst: Pointer to the destination array.
 *
 * Return: The length of the copied word.
 */
int copy_word(char *src, char *dst)
{
	int i = 0;

	while (src[i] != ' ' && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return (i);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: Pointer to the string to be split.
 *
 * Return: Pointer to the array of words, or NULL on failure.
 *         Each element of the array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i, j, len, nwords;

	if (str == NULL || *str == '\0' || *str == ' ')
	{
		return (NULL);
	}

	nwords = count_words(str);
	words = malloc((nwords + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nwords)
	{
		while (*str == ' ')
		{
			str++;
		}
		len = copy_word(str, words[i] = malloc((strlen(str) + 1) * sizeof(char)));
		if (len == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		i++;
		str += len;
	}
	words[i] = NULL;

	return (words);
}
