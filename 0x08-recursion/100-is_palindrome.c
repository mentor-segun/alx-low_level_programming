#include "main.h"

/**
 * is_palindrome - Function checks id a string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (is_palindrome_recursive(s, s));
}

/**
 * is_palindrome_recursive - this is a helper function
 *		to check if string is palindrome
 *
 * @b: The beginning of the check for comparison
 * @f: The finishing of the comparison check
 *
 * Return: 1 if the string is a palindrome, 0 if it is not
 */
int is_palindrome_recursive(char *b, char *f)
{
	if (b >= f)
		return (1);

	if (*b != *f)
		return (0);

	return (is_palindrome_recursive(b + 1, f - 1));
}
