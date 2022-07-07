#include "main.h"

/**
 * print_line - prints a line
 * @n: the number
 *
 * Return: 0
 */

void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
