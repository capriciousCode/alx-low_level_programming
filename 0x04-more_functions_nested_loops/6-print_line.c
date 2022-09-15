#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: the number of times _ should be printed
 *
 * Return: nothing (void)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n >= 1)
		{
			_putchar('_');
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
