#include "main.h"

/**
 * print_last_digit-prints last digit of a number
 *
 * @j: parameter integer
 *
 * Return: last digit of j
 *
 */

int print_last_digit(int j)
{
	int ld;

	if (j < 0)
		j *= -1;

	ld = j % 10;
	_putchar(ld + '0');
	return (ld);

}
