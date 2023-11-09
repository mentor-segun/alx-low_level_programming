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
	const char *ptr = format;

	va_start(args, format);
	while (*ptr)
	{
		switch (*ptr)
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
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
			default:
				break;
		}
		if (*(ptr + 1) && (*ptr == 'c'
					|| *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
			printf(", ");

		++ptr;
	}
	va_end(args);
	putchar('\n');
}
