#include <stdlib.h> /* for malloc and memset functions */
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: The number of elements to allocate
 * @size: The size of each element
 *
 * Return: A pointer to the allocated memory, or NULL if it fails
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	/* Return NULL if either nmemb or size is 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate the total size to allocate */
	total_size = nmemb * size;

	/* Allocate the memory and initialize it to zero */
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
