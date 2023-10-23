#include "main.h"

/**
 * set_string - function sets the value of a pointer to char
 * @s: A pointer to a pointer to a char
 * @to: A pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

