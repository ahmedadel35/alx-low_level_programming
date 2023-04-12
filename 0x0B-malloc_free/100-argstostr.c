#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of pointers to strings, representing the arguments.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 *         If ac is 0 or av is NULL, return NULL.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str = NULL;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}

		len++; /* for the \n */
	}

	concat_str = malloc(len * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat_str[k++] = av[i][j];
		}

		concat_str[k++] = '\n';
	}

	return (concat_str);
}
