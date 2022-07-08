#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - remaingn fi
 * @m: month
 * @d: days
 * @y: years
 * Return: void
 */

void print_remaining_days(int m, int d, int y)
{
	if ((y % 100 == 0 || y % 400 == 0) || (y % 4 == 0))
	{
		if (m > 2 && d >= 60)
		{
			d++;
		}
		printf("Day of the year: %d\n", d);
		printf("Remaining days: %d\n", 366 - d);
	}
	else
	{
		if (m == 2 && d == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", d);
			printf("Remaining days: %d\n", 365 - d);
		}
	}
}