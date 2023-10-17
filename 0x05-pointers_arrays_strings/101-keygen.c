#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 * Return: 0
 */

int main(void)
{
	char password[100];
	int i, length;

	srand(time(NULL));

	length = rand() % 9 + 7;
	for (i = 0; i < length; i++) {
		password[i] = 'a' + rand() % 26;
	}

	password[length] = '\0';

	printf("%s", password);
	return (0);
}
