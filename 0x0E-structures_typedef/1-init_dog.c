#include <stdio.h>
#include "dog.h"

/**
 * init_dog - data type of dog
 * @d: direction &my_dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: returns 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
