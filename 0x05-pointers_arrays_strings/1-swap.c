#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nothing(void)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
