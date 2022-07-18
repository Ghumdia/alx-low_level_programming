#include "main.h"

/**
 * _strchr - stearch character
 * @s: string
 * @c: somthing
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
