#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, e, q;

	i = 48;
	e = 48;
	q = 48;

	while (i < 58)
	{
		e = i + 1;
		while (e < 58)
		{
			q = e + 1;
			while (q < 58)
			{
				putchar(i);
				putchar(e);
				putchar(q);
				if (i < 55 || e < 56 || q < 57)
				{
					putchar(44);
					putchar(32);
				}
				q++;
			}
			e++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
