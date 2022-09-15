#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: nothing(void)
 */

void print_triangle(int size)
{
	int a, b;

	a = 1;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < (size - 1))
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < a)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}
