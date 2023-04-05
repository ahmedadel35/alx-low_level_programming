/**
 * str_len - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}

/**
 * is_pal_helper - Determines if a string is a palindrome using recursion
 * @s: The string to check
 * @i: The index of the current character being checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_pal_helper(char *s, int i)
{
	int len = str_len(s);

	if (i >= len / 2)
	{
		return (1);
	}
	else if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	else
	{
		return (is_pal_helper(s, i + 1));
	}
}

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (is_pal_helper(s, 0));
}
