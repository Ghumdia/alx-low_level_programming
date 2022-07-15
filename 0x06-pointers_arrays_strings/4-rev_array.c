#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: int
 * @n: int
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
