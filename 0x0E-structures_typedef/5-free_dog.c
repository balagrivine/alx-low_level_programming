#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated to dog
 * @dog_t: typedef
 * @d: pointer to struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
