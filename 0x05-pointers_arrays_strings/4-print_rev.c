#include "main.h"

/**
 * print_rev - This function prints a string in reverse followed by a new line.
 * 
 * @s: The string to be reversed and printed.
 */
void print_rev(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
