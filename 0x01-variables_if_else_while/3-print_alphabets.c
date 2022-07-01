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
	int B = 97;

	while (B < 123)
	{
		putchar(B);
		B++;
	}
	while (A < 91)
	{
		putchar(A);
		A++;
	}
	putchar(10);
	return (0);
}
