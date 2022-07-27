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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
