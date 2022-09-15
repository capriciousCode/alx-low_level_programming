#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 *
 * Return: nothing(void)
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
