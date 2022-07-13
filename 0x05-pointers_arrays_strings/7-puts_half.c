#include "main.h"

/**
 * puts_half - half string
 * @str: the string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (k = (i / 2) + 1; k < i; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
