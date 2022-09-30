#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point for program execution
 * @argc: length of array
 * @argv: array of strings
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		if (atoi(argv[i]) > 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
				
			printf("Error");
			return (1);
		}
	}
	
	printf("%d\n", sum);
	return (0);
}

