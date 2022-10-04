#include "main.h"

/**
 * _strdup - function returns a pointer
 * @str: striing to be copied
 *
 * Return: pointer to a string
 */
char *_strdup(char *str)
{
	char *cpy;
	int len, index;

	if (str == NULL)
		return (NULL);
	for (index = 0 ; str[index] != '\0' ; index++)
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);
	for (index = 0 ; str[index] != '\0' ; index++)
	{
		cpy[index] = str[index];
	}

	cpy[index] = '\0';

	return (cpy);
}

