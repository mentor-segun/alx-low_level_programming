#include "main.h"

/**
 * is_separator - Check if a character is a word separator.
 * @c: The character to check.
 * Return: 1 if it's a separator, 0 if not.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";

    for (int i = 0; separators[i] != '\0'; i++)
    {
        if (c == separators[i])
        {
            return 1; // It's a separator.
        }
    }

    return 0; // It's not a separator.
}

/**
 * cap_string - Capitalize the first letter of each word in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int capitalize_next = 1; // Flag to indicate if the next character should be capitalized.

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (capitalize_next && is_separator(str[i])) // Check for a separator.
        {
            capitalize_next = 1;
        }
        else if (capitalize_next && str[i] >= 'a' && str[i] <= 'z') // Check for lowercase letter.
        {
            str[i] = str[i] - 32; // Convert to uppercase.
            capitalize_next = 0;
        }
        else
        {
            capitalize_next = 0;
        }
    }

    return str;
}
