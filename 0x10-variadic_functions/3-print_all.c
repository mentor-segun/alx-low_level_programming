#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function prints anything and a new line at the end
 *
 * @format: Constant pointer to a constant character string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char type;
	int i;

	va_start(args, format);

	i = 0;
	while (format[i] != '\0')
	{
		type = format[i];
		switch (type)
		{
			case 'c':
				putchar(va_arg(args, int));
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			break;
			case 's':
			if (va_arg(args, char *) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(args, char *));
			}
			break;
			default:
			break;
		}
		i++;
	}
	va_end(args);
	putchar('\n');
}
