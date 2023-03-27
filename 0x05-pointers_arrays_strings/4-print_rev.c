#include <stdio.h>

/**
 * print_rev - check the code
 *
 * Description: 'the program's description'
 *
 * @s: the
 */
void print_rev(char *s)
{
    while (*s != '\0')
    {
        putchar(*s);
        s++;
    }

    putchar('\n');
}
