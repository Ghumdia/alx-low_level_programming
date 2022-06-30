#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int le = strlen(text);

	write(2, text, le);
	return (1);
}
