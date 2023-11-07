#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that free's dog
 * @d: Is the pointer to dog
 * 
 */

void free_dog(dog_t *d)
{
if (d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
}
