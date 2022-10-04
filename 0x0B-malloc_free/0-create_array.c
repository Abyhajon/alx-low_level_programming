#include "main.h"
#include <stddef.h>
#include <stdlib.h>




/**
 * create_array-creates an array
 * @size; size of array
 * @c: variable
 *
 * Return: *array (Success) or NULL (Failure)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if(size == 0)
		return (NULL);
	array = malloc(sizeof(c) * size);

	if (array == NULL)
		return (NULL);
	for (index = 0 ; index < size ; index++)
		c = array[index];

	return (array);
}

