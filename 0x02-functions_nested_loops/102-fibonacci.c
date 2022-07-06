#include <stdio.h>

/**
 * main - fibonacci 50 numbers
 *
 * Return: o
 */

int main(void)
{
	int c;
	unsigned long fi1 = 0, fi2 = 1, s;

	for (c = 0; c < 50; c++)
	{
		s = fi1 + fi2;
		printf("%lu", s);

		fi1 = fi2;
		fi2 = s;

		if (c == 49)
			printf("\n");
		else 
			printf(", ");
	}
	return (0);
}
