#include <stdio.h>
/**
 * premain - before main function
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n I bore");
	printf(" my house upon my back!\n");
}
