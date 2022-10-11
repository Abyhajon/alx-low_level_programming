#include "main.h"
#include <stdio.h>

/**
 * print_dog - prints the function struct dog
 * struct_dog: structure of dog type
 * @d: pointer to structure
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	return;

	if ((*d).name == NULL)
		printf("Name: nill\n");
	else
		printf("Name:%s", d->name);

	if ((*d).age == NULL)
		printf("Age: nill\n");
	else
		printf("Age:%d", d->age);

	if ((*d).owner == NULL)
		printf("Owner: nill\n");
	else
		printf("Owner:%s", d->owner);
}

