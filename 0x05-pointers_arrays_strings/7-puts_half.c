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
	k = i - 1;
	j = k / 2;

	while (j < k)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
