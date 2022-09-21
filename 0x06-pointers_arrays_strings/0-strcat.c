#include "main.h"

/**
 * _strcat - concatinates two strings
 * @dest: first input
 * @src: second input
 * Description - appends contents of src to the contents of dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[i] != '\0')
	{
		i++;
		dest[len + i] = src[i];
	}

	return (dest);
}
