#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer being printed
 *
 * Return: nothing (void)
 */

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 9)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
