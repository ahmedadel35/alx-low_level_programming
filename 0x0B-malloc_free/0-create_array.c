/**
 * create_array - creates an array of chars.
 * @size: unsigned int representing the size of the array to be created.
 * @c: the character value with which the array is to be initialized.
 *
 * Return: pointer to the array, or NULL if it fails.
 *         If size = 0 returns NULL.
 */

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
