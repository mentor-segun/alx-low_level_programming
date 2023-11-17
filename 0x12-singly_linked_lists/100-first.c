#include <stdio.h>

/**
 * before_main - This function prints some lines
 *		before main executes
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
