#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	unsigned int index;

	for (index = 0 ; s[index] != '\0' ; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}

	}

	return ('\0');
}
