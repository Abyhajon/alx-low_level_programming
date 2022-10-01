#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: character to check
 * @accept: character being looked for
 *
 * Return: 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			s[i] == accept[j];
			return (s + i);
		}

	}
	return (0);
}

