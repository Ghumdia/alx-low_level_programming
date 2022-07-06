#include <stdio.h>

/**
 * main - list natural numbers
 *
 * Return: 0
 */

int main(void)
{
	int n, s;

	s = 0;

	for (n = 0, n < 1024, n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			s += n;
		}
	}
	printf("%d\n", s);
	return (0);
}
