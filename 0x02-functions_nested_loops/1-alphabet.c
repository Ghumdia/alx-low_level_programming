#include "main.h"

/**
 * main - check code
 *
 * Description: prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
