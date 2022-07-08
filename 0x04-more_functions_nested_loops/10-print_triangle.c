#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int l;
	int s;
	int h;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (s = size - 1; s > l; s--)
			{
				_putchar(' ');
			}
			for (h = 0; h < l + 1; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
