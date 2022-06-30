#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - 
 *
 * Description: 
 *
 * Return: 
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int length = strlen(text);

	write(2, text, length);
	return (1);	
}
