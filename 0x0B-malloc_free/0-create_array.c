#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array
 * @size: int
 * @c: casket
 *
 * Return: NULL, 0 or ar
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = (char *)malloc(size * sizeof(char));
	if (b == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(b + i) = c;
	}
	return (b);
}
