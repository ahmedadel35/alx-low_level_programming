#include <stdio.h>

/**
 * main - Prints all command-line arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 (Always success).
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
