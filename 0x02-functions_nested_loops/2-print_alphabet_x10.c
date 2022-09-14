#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 *
 * Returns: void
 */
void print_alphabet_x10(void)
{
	char l;
	int i = 9;

	while (i < 9)
	{
		for (l = 'a' ; l <= 'z' ; l++)
		{
			_putchar(l);
		}

		_putchar('\n');

		i++;
	}
}
