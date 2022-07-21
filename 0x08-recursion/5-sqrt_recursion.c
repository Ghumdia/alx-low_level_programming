#include "main.h"

/**
 * _sqrt_recursion - square
 * square - sqaure
 * @n: integer
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - the square
 * @n: int
 * @val: int
 *
 * Return: 0
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
