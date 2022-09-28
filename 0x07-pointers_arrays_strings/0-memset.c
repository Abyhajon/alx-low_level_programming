#include "main.h"

/**
 * _memset -  function copies n bytes from memory area src to memory area dest
 * @s: starting address of memory to be filled
 * @b: value to be filled in memory area
 * @n: maximum bytes to be filled
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while ((i = 0) && (n > 0))
	{
		i++;
		n--;
	}

	s[i] = b;

	return (s);
}
