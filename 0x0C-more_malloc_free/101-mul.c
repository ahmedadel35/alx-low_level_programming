#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 **/
void _putchar(char c)
{
	putchar(c);
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to write
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 **/
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The converted integer
 **/
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		if (!_isdigit(*s))
			return (0);

		result = result * 10 + (*s - '0');
		s++;
	}

	return (result * sign);
}

/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if success, 98 if error
 **/
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	while (*num1_str != '\0')
	{
		if (!_isdigit(*num1_str))
		{
			printf("Error\n");
			return (98);
		}

		num1_str++;
	}

	while (*num2_str != '\0')
	{
		if (!_isdigit(*num2_str))
		{
			printf("Error\n");
			return (98);
		}

		num2_str++;
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
