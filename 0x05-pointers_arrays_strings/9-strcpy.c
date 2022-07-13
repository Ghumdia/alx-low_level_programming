#include "main.h"

/**
 * _strcpy - nbr nvjif kg
 * @dest: jiif
 * @scr: nif
 *
 * Return: nfunv
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
