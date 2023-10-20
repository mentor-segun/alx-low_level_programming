#include "main.h"

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer r.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, carry = 0;
    int i, j, k;

    for (len1 = 0; n1[len1] != '\0'; len1++)
        ;
    for (len2 = 0; n2[len2] != '\0'; len2++)
        ;

    if (len1 + 2 > size_r || len2 + 2 > size_r)
        return (0);

    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int num1 = (i >= 0) ? n1[i] - '0' : 0;
        int num2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = num1 + num2 + carry;

        if (sum > 9)
        {
            carry = 1;
            sum -= 10;
        }
        else
        {
            carry = 0;
        }

        r[k++] = sum + '0';

        if (i >= 0)
            i--;
        if (j >= 0)
            j--;

        if (k >= size_r)
            return (0);
    }

    r[k] = '\0';

    for (i = 0, j = k - 1; i < j; i++, j--)
    {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    return r;
}
