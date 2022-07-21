#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - prime numbers
 * @n: int
 *
 * Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - prime
 * @n: int
 * @resp: nkf
 *
 * Return: 0
 */

int check_prime(int n, int resp)
{
	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}
