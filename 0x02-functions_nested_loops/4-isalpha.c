#include "main.h"

/**
 * _isalpha - This function checks for alphabetic characters
 *
 * @c: This is the character to be checked
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise.
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
