#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the array
 * @a: array of integers
 * @n: integer
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
