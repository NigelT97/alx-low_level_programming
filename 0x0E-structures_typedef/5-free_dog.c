#include "dog.h"
/**
 * free_dog - frees values
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
