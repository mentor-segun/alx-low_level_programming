#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	/* Print the number of arguments (argc - 1 as argv[0] is the program name) */
	printf("%d\n", argc - 1);

	return (0);
}
