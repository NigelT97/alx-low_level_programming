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

	x = (dog_t *) malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);
	x->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (x->name == NULL)
	{
		free(x);
		return (NULL);
	}
	x->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (x->owner == NULL)
	{
		free(x);
		free(x->name);
		return (NULL);
	}
	strcpy(x->name, name);
	x->age = age;
	strcpy(x->owner, owner);

	return (x);
}
