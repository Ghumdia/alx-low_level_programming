#include "main.h"
#include <string.h>

/**
 * rev_string - reverses the string
 * @s: The string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, k;

	j = strlen(s);

	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
