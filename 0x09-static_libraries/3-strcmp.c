#include "main.h"
#include <string.h>

/**
 * _strcmp - hbfhv
 * @s1: sting 1
 * @s2: string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
