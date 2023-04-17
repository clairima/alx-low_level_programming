#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable
 * @name: string containing the dog's name
 * @age: age of the dog as a float
 * @owner: string containing the name of the dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
