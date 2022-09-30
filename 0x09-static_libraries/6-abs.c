#include "main.h"

/**
 * _abs-returns the absolute value of an integer
 *
 * @j: integer being returned
 *
 * Return: absolute value of int
 */

int _abs(int j)
{

	if (j < 0)
		return (j * (-1));
	else
		return (j);

}
