#include <stdio.h>

/**
 * main - serves as start point for progrma execution
 * @argc: number of strings
 * @argv: array of string
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
