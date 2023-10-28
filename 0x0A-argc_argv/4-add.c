#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string represents a positive number
 * @s: String to check
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *s)
{
	while (*s != '\0') 
	{
		if (*s < '0' || *s > '9')
			return 	(0);
		s++;
	}
	return (1);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
