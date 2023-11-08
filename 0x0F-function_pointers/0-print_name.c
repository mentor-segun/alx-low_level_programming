#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using the given function pointer
 * @name: name of the person
 * @f: function pointer to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
