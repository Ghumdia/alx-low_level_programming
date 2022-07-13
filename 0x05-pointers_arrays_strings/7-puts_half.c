#include "main.h"

/**
 * puts_half - inserts half of the string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	k = (i - 1) / 2;

	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		_putchar(str[k]);
	}
}
