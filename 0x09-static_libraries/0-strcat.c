#include "main.h"

/**
 * _strcat - concertinates
 * @dest: destination
 * @src: source
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + n)))
	{
		i++;
		n++;
	}
	return (dest);
}
