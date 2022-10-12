#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog_t
 * @dog_t: structure
 * @d: pointer to struct dog
 *
 * Description: frees memory allocated to dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
