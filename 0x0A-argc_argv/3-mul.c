#include <stdio.h>
#include <stdlib.h>

/**
 * main - start point for program execution
 * @argc: string count
 * @argv: array of strings
 *
 * Return: 1 (Error)
 *
 */
int main(int argc, char *argv[])
{
	int mul, i, j;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]);
		i = atoi(argv[2]);

		mul = j * i;
		printf("%d", mul);
	}

	return (0);
}


