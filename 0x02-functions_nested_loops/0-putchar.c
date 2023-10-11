#include "main.h"

/**
 * main - Entry point
 *
 * This program prints putchar
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
