#include "main.h"

/**
 * print_diagonal - prints lines in diagonal
 * @n: n is an integer
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n > 0)
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces < lines; spaces++)
			{
				_putchar('\\');
				_putchar('\n');
			}
			_putchar('\n');
		}
	}
	else 
	{
		_putchar('\n');
	}
}
