#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints zero
 *
 * Return: 0
 */

int main(void)
{
int n;
n = 0;
if (n < 0)
{
printf("%i is negative\n", n);
}
else if (n > 0)
{
printf("%i is positive\n", n);
}
else
{
printf("%i is zero\n", n);
}
return (0);
}
