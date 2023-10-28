#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	/* Check if there's at least one argument */
	if (argc > 0)
	{
		/* Print the name of the program taken from argv[0] */
		printf("%s\n", argv[0]);
		return (0);
	}
	else
	{
		return (1);
	}
}
