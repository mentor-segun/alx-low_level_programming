#include "main.h"

/**
 * main - Entry point
 *
 * print_putchar - This program prints _putchar and a new line
 *	The print_putchar does not return any value
 *
 * Return: Always 0 (success)
 */

void print_putchar(void);

int main(void)
{
	print_putchar();
	return (0);
}

void print_putchar(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
