#include "main.h"

/**
 * print_numbers - prints the numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
