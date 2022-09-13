#include "main.h"

/**
 * _print_sign-prints the sign of integers inputted
 *
 * @n: the integer being checked
 *
 * Return: 1 if positive, 0 is zero, -1 if negative
 *
 */

int _print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
