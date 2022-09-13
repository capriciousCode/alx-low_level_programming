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
	int ld = j % 10;

	if (ld < 0)
		ld *= -1;



	_putchar('0' + ld);

	return (ld);

}
