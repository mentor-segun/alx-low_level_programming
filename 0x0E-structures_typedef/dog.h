#ifndef DOG_H
#define DOG_H
#include <stddef.h>

/**
 * struct dog - structure representing a dog
 *
 * @name: name element of char type
 * @age: age element of float type
 * @owner: owner element of char type
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
