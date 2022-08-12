#include <stdio.h>

/**
 * mystartup - starts the program
 */

void __attribute__ ((constructor)) mystartup(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon ");
	printf("my back!\n");
}
