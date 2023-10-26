#include "main.h"

/**
 * _print_rev_recursion - This function prints a string
 * in reverse using recursion
 *
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	/*Base case*/
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
