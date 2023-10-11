#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - Print the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void);

{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
