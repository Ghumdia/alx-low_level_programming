#include "main.h"

/**
 * print_last_digit - last dig of a number
 * @n: last digit od n
 *
 * Return: 1 or 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
