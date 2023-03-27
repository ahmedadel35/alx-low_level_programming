#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
	int length = strlen(str);

	for (int i = 0; i < length; i += 2)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
