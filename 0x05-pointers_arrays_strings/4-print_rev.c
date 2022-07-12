#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string backwards
 * @s: string
 
 * Return: void
 */

void print_rev(char *s)
{
<<<<<<< HEAD

=======
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
>>>>>>> e092a817c2dbd46b91db9ba47f55684683762dc4
}
