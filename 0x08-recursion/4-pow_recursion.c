#include "main.h"

/**
 * _pow_recursion - returns value of x to the power y
 *
 * @x: base value
 * @y: exponent value
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
