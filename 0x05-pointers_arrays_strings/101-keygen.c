#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - password at random
 *
 * Description: nvinf
 *
 * Return: void
 */
int main(void)
{
	int N = 10;
	int i = 0;
	int randm = 0;
	char numb[1000] = "1234567890";
	char letter[1000] = "abcdefghijklmnopqrst";
	char Letter[1000] = "ABCDEFGHIJKLMNOP";
	/**char sym[1000] = "$%&@!&";*/
	char password[10];
	randm = rand() % 3;
	srand((unsigned int)(time(NULL)));

	for (i = 0; i < N; i++)
	{
		if (randm == 1)
		{
			password[i] = numb[rand() % 10];
			randm = rand() % 3;
			printf("%c", password[i]);
		}
		else if (randm == 2)
		{
			password[i] = letter[rand() % 20];
			randm = rand() % 3;
			printf("%c", password[i]);
		}
		else if (randm == 3)
		{
			password[i] = Letter[rand() % 16];
			randm = rand() % 3;
			printf("%c", password[i]);
		}
		/**else
		{
			password[i] = sym[rand() % 6];
			randm = rand() % 3;
			printf("%c", password[i]);
		}
		*/
	}
	putchar('\n');
	return (0);
}
