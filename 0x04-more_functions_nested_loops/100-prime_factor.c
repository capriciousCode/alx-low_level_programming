#include <stdio.h>

/**
 * main - prints the largest prime number of 612852475143
 *
 * Return: 0(success)
 */

int main(void)
{
	long num = 612852475143;
	long d = 2;
	long prime = 0;

	while (num != 1)
	{
		if (num % d == 0)
		{
			num /= d;
			prime = d;

		}
		d++;
	}
	printf("%ld\n", prime);

	return (0);
}
