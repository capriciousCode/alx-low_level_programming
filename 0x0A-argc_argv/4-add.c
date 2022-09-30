#include <stdio.h>
#include <stdlib.h>

/**
 * main -adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);
	return (0);
}
