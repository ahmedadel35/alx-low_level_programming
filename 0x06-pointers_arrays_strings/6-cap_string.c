#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - will do
 * Description: 'the program's description'
 *
 * @str: we
 * Return: desr
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ' ||
		 str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' ||
			 str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' ||
			 str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' ||
			 str[i - 1] == '{' || str[i - 1] == '}')
		{
			str[i] = toupper(str[i]);
		}
		else
		{
			str[i] = tolower(str[i]);
		}
		i++;
	}

	return (str);
}
