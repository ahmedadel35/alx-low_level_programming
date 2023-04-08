#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to which src will be appended
 * @src: string to be appended to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    char *p = dest;

    while (*p)
        p++;

    while ((*p++ = *src++))
        ;

    return (dest);
}
