#include <stdio.h>
/**
 * premain - before main function
 */
void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\nI bore");
	printf(" my house upon my back!\n");
}
