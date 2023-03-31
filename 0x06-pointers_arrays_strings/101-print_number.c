#include <stdio.h>

/**
 * print_number - will do
 * Description: 'the program's description'
 *
 * @n: we
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
