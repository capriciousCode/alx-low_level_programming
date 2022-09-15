#include "main.h"

/**
 * print_square - prints a square to the terminal
 *
 * @size: size of the square
 *
 * Return: nothing(void)
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		_putchar('#');
		for (b = 0; b < (size - 1); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
