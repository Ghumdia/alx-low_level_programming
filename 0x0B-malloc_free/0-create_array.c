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
	unsigned int n;
	char *ar;

	ar = (char *)malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	else if (size != 0)
	{
		for (n = 0; n < size; n++)
			*(ar + n) = c;
		return (ar);
	}
	else
	{
		return (NULL);
	}
	free(ar);
}
