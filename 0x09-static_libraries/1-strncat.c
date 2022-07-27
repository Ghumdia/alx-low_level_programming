#include "main.h"
#include <string.h>

/**
 * _strncat - domv
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
