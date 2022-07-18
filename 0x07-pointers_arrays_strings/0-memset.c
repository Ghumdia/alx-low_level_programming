#include <string.h>
#include "main.h"

/**
 * _memset - files up memory
 * @s: string
 * @n: integer
 * @b: bytes
 *
 * Return: void
 */

char *_memset(char  *s, char b, unsigned int n)
{
	memset(s, n, b);
	return (s);
}
