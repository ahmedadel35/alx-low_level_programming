
/**
 * _strcat - will do
 * Description: 'the program's description'
 *
 * @dest: we
 * @src: asd
 * Return: desr
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (temp);
}