#include "main.h"

/**
 * more_numbers - prints most numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		c = '0';
		for (c <= '14'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
