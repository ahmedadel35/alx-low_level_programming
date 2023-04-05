/**
 * is_prime_helper - Determines if a number is prime using recursion
 * @n: The number to check
 * @i: The current divisor to check for n's divisibility
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n % i == 0 && i != n)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else
	{
		return (is_prime_helper(n, i + 1));
	}
}

/**
 * is_prime_number - Determines if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
