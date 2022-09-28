#include "main.h"

/**
 * find_sqrt - find square root of n
 *
 * @n: number param
 * @root: squared num
 *
 * Return: square root of n
 */

int find_sqrt(int n, int root)
{
	if (n > root / 2)
		return (-1);
	else if (n * n == root)
		return (n);
	return (find_sqrt(n + 1, root));
}

/**
 * _sqrt_recursion - returns natural squareroot of number
 *
 * @n: number param
 *
 * Return: root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(0, n));
}
