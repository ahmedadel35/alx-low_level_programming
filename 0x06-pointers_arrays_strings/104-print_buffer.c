#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - asdsa
 * Description: Removes any leading zeros from.
 *
 * @b: The string to remove leading zeros from.
 * @size: A pointer to the length of the string.
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);
		for (int j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", (unsigned char)b[i + j]);
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				print_if_print(c);
			}
		}
		printf("\n");
	}
}

/**
 * print_if_print - asdsa
 * Description: Removes any leading zeros from.
 *
 * @c: The string to remove leading zeros from.
 */
void print_if_print(char c)
{
	if (isprint(c))
	{
		printf("%c", c);
	}
	else
	{
		printf(".");
	}
}
