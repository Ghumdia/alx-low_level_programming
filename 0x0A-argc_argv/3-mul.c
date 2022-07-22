#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: john
 * @argv: billy
 *
 * Return: Error or 0
 */

int main(int argc, char *argv[])
{
	int s;
	int val = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (s = 0; s < argc; s++)
	{
		val *= atoi(argv[i]);
	}
	printf("%d\n", val);
	return (0);
}
