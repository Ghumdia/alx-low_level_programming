#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
    int i, j, k, n, o;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    n = (i - 1) / 2;
    if (i % 2 == 0)
    {
        for ( j = i / 2; j < i; j++)
        {
            putchar(str[j]);
        }
    }
    else
    {
        for (k = i / 2;k < i; k++)
        {
            putchar(str[k]);
        }
    }
   putchar('\n');
}
