#include <stdio.h>

#include <unistd.h>

/**
 * main - Entry point
 *
 * Description - serves as the starting point for program execution
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
			putchar (c);
	}		
	
	putchar('\n');

	return(0);
}
