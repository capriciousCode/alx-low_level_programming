#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 *
 * @a: the array parameter
 * @n: number of elements in the array
 *
 * Return: nothing(void)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
