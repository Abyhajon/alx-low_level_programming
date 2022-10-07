#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory to an array
 * @nmemb: no of blocks to allocate memory
 * @size: size of each block
 *
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr; /*pointer to allocated memory*/
	char *arr; /*pointer to array to fill the memory*/
	unsigned int i;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	arr = ptr;

	for (i = 0 ; i < (nmemb * size) ; i++)
		arr[i] = '\0';

	return (ptr);
}
