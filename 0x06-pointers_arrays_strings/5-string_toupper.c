#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - up to n characters from
 * src string to the end of the dest string.
 * Adds a null terminator to the end of dest.
 *
 * @str: asd
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
