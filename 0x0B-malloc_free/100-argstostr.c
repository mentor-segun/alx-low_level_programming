#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this function concatenates all the arguments
 *
 * @ac: first argument to be concatenated
 * @av: second argument to be concatenated
 * Return: pointer to a new string or
 *	NULL if ac = 0, av == NULL, or if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, index, total_length;
	char *concatenated;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	concatenated = malloc(total_length + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	index = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concatenated[index] = av[i][j];
			index++;
			j++;
		}
		concatenated[index] = '\n';
		index++;
	}
	concatenated[index] = '\0';
	return (concatenated);
}
