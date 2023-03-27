#include <stdio.h>
#include <string.h>

/**
 * rev_string - check the code
 *
 * Description: 'the program's description'
 *
 * @s: the
 */
void rev_string(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
