#include <stdio.h>

/**
 * main - prints the largest number
 *
 * Return: Always 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int q = prime;
	long int d = 2;

	while (q != d)
	{
		if (q % d == 0)
		{
			q = q / d;
		}
		else
		{
			d++;
		}
	}
	printf("%li\n", q);
	return (0);
}
