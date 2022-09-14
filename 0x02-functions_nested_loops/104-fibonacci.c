#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, c, d, x, y, z;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c += b;
		b = c - b;
	}

	d = b / 1000000000;
	x = b % 1000000000;
	y = c / 1000000000;
	z = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", y + (z / 1000000000));
		printf("%lu", z % 1000000000);
		y += d;
		d = y - d;
		z += x;
		x = z - x;
	}

	printf("\n");

	return (0);
}
