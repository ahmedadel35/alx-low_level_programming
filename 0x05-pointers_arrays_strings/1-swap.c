#include <stdio.h>

/**
 * swap_int - check the code
 *
 * Description: 'the program's description'
 *
 * @a: the
 * @b: the
 */
void swap_int(int *a, int *b)
{
	int swap;
	int *ptr;

	ptr = &swap;

	*ptr = *a;
	*a = *b;
	*b = swap;
}
