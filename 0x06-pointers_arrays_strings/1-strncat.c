/**
 * Concatenates up to n characters from the src string to the end of the dest string.
 * Adds a null terminator to the end of dest.
 *
 * @dest: asd
 * @src: sd
 * @n: asd
 * Returns a pointer to the start of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}