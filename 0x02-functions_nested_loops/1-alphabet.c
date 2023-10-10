#include "main.h"

/**
 * This program prints the alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
}
