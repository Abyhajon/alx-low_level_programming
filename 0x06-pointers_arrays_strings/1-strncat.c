#include "main.h"

/**
 * _strncat - concatinates two strings
 * @dest: first input
 * @src: second input
 * @n: maximum length to be appended from src
 * Description - it appends value of src to the value of dest till nth element
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0' && src[i] < n)
	{
		i++;
		dest[len + i] = src[i];
	}

	return (dest);
}

