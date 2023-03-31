#include <stdio.h>
#include <string.h>

/**
 * infinite_add - asd
 * Description: Adds two arbitrarily large numbers.
 *
 * @n1: The first number to add.
 * @n2: The second number to add.
 * @r: The buffer to store the result in.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result, or null if.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1), len2 = strlen(n2),
		len_r = size_r - 1,
		carry = 0, i = len1 - 1, j = len2 - 1, k = len_r - 1;

	r[len_r] = '\0';

	while (i >= 0 || j >= 0 || carry != 0)
	{
		int digit1 = (i >= 0) ? n1[i--] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j--] - '0' : 0;
		int digit = add_digits_with_carry(digit1, digit2, carry);

		carry = calculate_carry(digit1, digit2, carry);

		if (k < 0)
		{
			return ((char *)0);
		}
		r[k] = digit + '0';
		i--;
		j--;
		k--;
	}

	remove_leading_zeros(r, &len_r);

	return ((len_r >= size_r) ? (char *)0 : r);
}

/**
 * add_digits_with_carry - asjhj
 * Description: Adds two digits and a carry.
 *
 * @digit1: The first digit to add.
 * @digit2: The second digit to add.
 * @carry: The carry digit from the previous addition.
 * Return: The resulting digit.
 */
int add_digits_with_carry(int digit1, int digit2, int carry)
{
	int sum = digit1 + digit2 + carry;

	return (sum % 10);
}

/**
 * calculate_carry - asdasd
 * Description: Adds two digits and a carry.
 *
 * @digit1: The first digit to add.
 * @digit2: The second digit to add.
 * @carry: The carry digit from the previous addition.
 * Return: The resulting carry digit.
 */
int calculate_carry(int digit1, int digit2, int carry)
{
	int sum = digit1 + digit2 + carry;

	return (sum / 10);
}

/**
 * remove_leading_zeros - asdsa
 * Description: Removes any leading zeros from.
 *
 * @r: The string to remove leading zeros from.
 * @len_r: A pointer to the length of the string.
 */
void remove_leading_zeros(char *r, int *len_r)
{
	while (*r == '0' && *(r + 1) != '\0')
	{
		r++;
		(*len_r)--;
	}
}
