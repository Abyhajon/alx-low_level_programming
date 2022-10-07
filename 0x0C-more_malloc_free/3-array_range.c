#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: minimum value
 * @max: max value
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int index, *arr, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0 ; index < size ; index++)
		arr[index] = min++;

	return (arr);
}
