#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, num1 = 1, num2 = 2, fib;

	printf("%d, %d", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		fib = num1 + num2;
		printf(", %d", fib);
		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return 0;
}
