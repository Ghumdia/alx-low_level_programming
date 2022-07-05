#include <main.h>

/**
 * main - Entry point
 *
 * Description: described something
 *
 * Return: Always 1 (Success)
 */ 
int main()
{
	char var[] = "_putchar";
	int f;

	int lvar = sizeof(var) / sizeof(var[0]);

	for (f = 0; f < lvar - 1; f++)
	{
		_putchar(var[f]);
	}
	_putchar("\n");
	return(0);
}
