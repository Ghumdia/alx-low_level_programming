#include "main.h"

/**
 * _isupper - checkes if uppercase
 * @c: char to be chacked
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
