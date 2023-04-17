#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: - string
 * @age: - float
 * @owner: - char
 * Return: pointer of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	if (age < 0 || !name || !owner)
		return (NULL);
	x->name = *strcpy(x->name, name);
	x->age = age;
	x->owner = *strcpy(x->owner, owner);

	return (x);
}
