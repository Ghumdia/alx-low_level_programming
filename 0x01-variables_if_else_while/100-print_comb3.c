#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this one is hard
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (i < 58)
	{
		e = i + 1;
		while (e < 58)
		{
			putchar(i);
			putchar(e);
			if (i < 56 || e < 57)
			{
				putchar(44);
				putchar(32);
			}
			e++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
