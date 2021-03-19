#include <stdio.h>

/**
 * printBefore - prints before main function is executed
 */

void __attribute__ ((constructor)) printBefore()
{
	printf("You're beat! and yet, you must allow,
\n I bore my house upon my back!\n");
}
