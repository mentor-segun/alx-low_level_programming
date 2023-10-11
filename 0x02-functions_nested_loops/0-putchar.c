#include "main.h"

/**
 * main - Entry point
 *
 * print_putchar - This function prints "_putchar" followed by a new line
 *
 * print_putchar - The print_putchar function does not return any value
 *
 * Return: Always 0 (success)
 */

#include "main.h"

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

return (0);
}
