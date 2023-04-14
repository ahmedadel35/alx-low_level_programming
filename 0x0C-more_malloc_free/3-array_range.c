#include <stdlib.h> /* for malloc function */

/**
 * array_range - Creates an array of integers from min to max
 * @min: The minimum value to include in the array
 * @max: The maximum value to include in the array
 *
 * Return: A pointer to the newly created array, or NULL if it fails
 **/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	/* Return NULL if min is greater than max */
	if (min > max)
		return (NULL);

	/* Calculate the size of the array to allocate */
	size = max - min + 1;

	/* Allocate the memory for the array */
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	/* Fill the array with values from min to max */
	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
