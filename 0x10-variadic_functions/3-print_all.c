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
	int print_comma = 0;
	char *str;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				print_comma = 1;
				break;
		}
		if (format[i + 1] != '\0' && !print_comma)
			printf(", ");
		print_comma = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
