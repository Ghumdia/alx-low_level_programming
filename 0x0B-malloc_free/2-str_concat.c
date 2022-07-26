#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *s;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
	i = 0;
	while (s1[i] != '\0')
		i++;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		j = 0;
		while (s2[j] != '\0')
			j++;
	}
	k = i + j + 1;
	s = malloc(k * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + i] = s2[l];
	s[i + j] = '\0';
	return (s);
}
