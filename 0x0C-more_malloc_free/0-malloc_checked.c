#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: size of memory to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (p);
}

