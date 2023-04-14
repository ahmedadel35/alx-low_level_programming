#include <stdlib.h> /* for malloc and free functions */
#include <string.h> /* for memcpy function */

/**
 * _realloc_null_ptr - Allocates memory when ptr is NULL
 * @new_size: The new size of the memory block
 *
 * Return: A pointer to the newly allocated memory block
 **/
void *_realloc_null_ptr(unsigned int new_size)
{
	void *new_ptr;

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	return (new_ptr);
}

/**
 * _realloc_new_ptr - Allocates new memory when ptr is not NULL
 * @ptr: A pointer to the memory previously allocated with malloc
 * @new_size: The new size of the memory block
 *
 * Return: A pointer to the newly allocated memory block
 **/
void *_realloc_new_ptr(void *ptr, unsigned int new_size)
{
	/* void *new_ptr; */

	ptr = malloc(new_size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}

/**
 * _realloc_copy_contents - Copies the contents of
 * @new_ptr: A pointer to the newly allocated memory block
 * @ptr: A pointer to the memory previously allocated
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the memory block
 **/
void _realloc_copy_contents(
	void *new_ptr,
	void *ptr,
	unsigned int old_size,
	unsigned int new_size)
{
	unsigned int copy_size;

	copy_size = (old_size < new_size ? old_size : new_size);

	memcpy(new_ptr, ptr, copy_size);
}

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size of the allocated space for ptr
 * @new_size: The new size of the memory block
 *
 * Return: A pointer to the reallocated memory block, or NULL if it fails
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (_realloc_null_ptr(new_size));

	if (new_size == old_size)
		return (ptr);

	new_ptr = _realloc_new_ptr(ptr, new_size);

	if (new_ptr == NULL)
		return (NULL);

	_realloc_copy_contents(new_ptr, ptr, old_size, new_size);

	free(ptr);

	return (new_ptr);
}
