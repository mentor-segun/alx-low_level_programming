#include "main.h"

/**
 * is_prime_number - This function checks if a number is prime
 *
 * is_prime_recursive - This is a helper function to check prime recursively
 *
 * @n: The number to check if it is prime
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - This is a helper function to check prime recursively
 *
 * @n: The number to check if it is prime
 *
 * @d: The divisor to be tested
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */
int is_prime_recursive(int n, int d)
{
	if (d >= n)
		return (1);

	if (n % d == 0)
		return (0);

	return (is_prime_recursive(n, d + 1));
}
