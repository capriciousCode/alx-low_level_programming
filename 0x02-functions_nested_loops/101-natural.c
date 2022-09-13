#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 and 5 below 1024
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int multi3, multi5, sum;
	int i;

	multi3 = 0;
	multi5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			multi3 += i;
		} else if ((i % 5) == 0)
		{
			multi5 += i;
		}
	}
	sum = multi3 + multi5;
	printf("%lu\n", sum);
	return (0);
}

