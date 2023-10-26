#include "main.h"

/**
 * _puts_recursion - This function prints a string using recursion
 *
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	/*Base case*/
	if (*s == '\0')
	{
		/* This prints a new line*/
		_putchar('\n');
		return;
	}

	/* This prints the character */
	_putchar(*s);
	/*This recursion function continues to print the next character*/
	_puts_recursion(s + 1);
}
