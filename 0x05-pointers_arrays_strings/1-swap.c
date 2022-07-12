#include "main.h"

/**
 * swap_int - Calling functions
 * @a: First integer
 * @b: Second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int v = *a;
	*a = *b;
	*b = v;
}
