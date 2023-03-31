#include <stdio.h>

/**
 * reverse_array - up to n characters from
 * src string to the end of the dest string.
 * Adds a null terminator to the end of dest.
 *
 * @a: asd
 * @n: sd
 * Returns a pointer to the start of dest.
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
