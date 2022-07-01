#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - determine if number is positive or negative
 *
 * Description: prints "whether the number is 0, - or +"
 *
 * Return 0 (Success)
 */

int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
