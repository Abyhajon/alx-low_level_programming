#include <stdio.h>

/**
 * main - Entry point
 *
 * code prints the 25 letters of the alphabet in lower_case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	
	putchar('\n');

	return (0);

}
