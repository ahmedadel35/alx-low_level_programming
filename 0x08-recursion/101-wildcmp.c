/**
 * wildcmp_helper - Compares two strings and returns 1 if they are identical,
 * 0 otherwise
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
		else if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (0);
		}
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * wildcmp - Compares two strings and returns 1 if they are identical,
 * 0 otherwise
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
