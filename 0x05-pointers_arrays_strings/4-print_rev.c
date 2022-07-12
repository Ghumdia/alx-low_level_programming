#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints string in reverse
 * @str: a string
 *
 * Return: void
 */

void print_rev(char *str)
{
	strrev(str);
	printf("%d\n", str);
}
