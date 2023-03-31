#include <stdio.h>

/**
 * _absolute_value - Computes the absolute value of an integer.
 * Description: 'the program's description'
 * @n: The integer to compute the absolute value of.
 * Return: The absolute value of n.
 */
int _absolute_value(int n)
{
	return ((n < 0) ? -n : n);
}

/**
 * ___num_digits - Computes the number of di
 * Description: 'the program's description'
 * @n: The integer to compute the number of digits of.
 * Return: The number of digits in n.
 */
int __num_digits(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return (count);
}

/**
 * _divisor - Computes the power of 10.
 * Description: 'the program's description'
 * @n: The integer to compute the _divisor for.
 * Return: The _divisor.
 */
int _divisor(int n)
{
	int div = 1;
	int i = 1;

	for (i = 1; i < n; i++)
	{
		div *= 10;
	}
	return (div);
}

/**
 * _print_digits - Prints each digit
 * Description: 'the program's description'
 * @n: The integer to print the digits of.
 * @d: The _divisor to use to extract the digits.
 */
void _print_digits(int n, int d)
{
	while (d != 0)
	{
		int digit = n / d;

		putchar('0' + digit);

		n %= d;
		d /= 10;
	}
}

/**
 * print_number - Prints an integer to the console.
 * Description: 'the program's description'
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = _absolute_value(n);
	}
	if (n == 0)
	{
		putchar('0');
		return;
	}

	int num = __num_digits(n);
	int div = _divisor(num);

	_print_digits(n, div);
}
