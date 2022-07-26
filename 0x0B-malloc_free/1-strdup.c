#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str: string
 *
 * Return: something
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		s[j] = str[j];
	return (s);
}
