#include <stdio.h>

/**
 * print_array - check the code
 *
 * Description: 'the program's description'
 *
 * @a: the
 * @n: we
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
