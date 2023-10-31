#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - This function counts the words
 *
 * @str: The string to be split into words
 * Return: Count
 */
int count_words(char *str)
{
	int count, in_word;

	count = 0;
	in_word = 0;

	while (*str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}
/**
 * get_next_word - This function gets the next word
 *
 * @str: The string to be split into words
 * Return: the string
 */
char *get_next_word(char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;

	return (str);
}
/**
 * strtow - This function splits a string into words
 *
 * @str: The string to be split into words
 * Return: The words
 */
char **strtow(char *str)
{

	int i, j, len, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	words = malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		str = get_next_word(str);

		len = 0;

		while (str[len] != ' ' && str[len] != '\t' &&
				str[len] != '\n' && str[len] != '\0')
			len++;

		words[i] = malloc((len + 1) * sizeof(char));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[i][j] = *str++;

		words[i][len] = '\0';
	}

	words[word_count] = NULL;
	return (words);
}
