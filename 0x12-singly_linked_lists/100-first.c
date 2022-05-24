#include <stdio.h>

/**
 * printBeforeMain - function prints before main is executed
 */
void __attribute__ ((constructor)) printBeforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
