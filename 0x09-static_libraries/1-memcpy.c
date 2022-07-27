#include "main.h"

/**
 * _memcpy - copies to location
 * @dest: destination
 * @src: source
 * @n: ineger
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
