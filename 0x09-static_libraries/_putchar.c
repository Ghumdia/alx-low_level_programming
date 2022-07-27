#include <unistd.h>

/**
 * _putchar - entry point
 * @c: string
 *
 * Return: write
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
