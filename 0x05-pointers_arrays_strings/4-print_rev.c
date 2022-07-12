#include "main.h"

/**
 * print_rev - reverse string
 * @s: string
 
 * Return: void
 */

void print_rev(char *s)
{
	int i, m, h;
	char f, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	m = i - 1;
	h = m / 2;
	while (h >= 0)
	{
		f = s[m - h];
		l = s[h];
		s[h] = f;
		s[m - h] = l;
		h--;
	}
}
