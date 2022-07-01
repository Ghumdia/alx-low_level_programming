#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: alphabets in uppercase
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	int A = 65;

	while(A < 90)
	{
		putchar(A);
		A++;
	}
	putchar(10);
	return (0);
}
