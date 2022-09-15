#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9, excluding 2 & 4
 *
 * Return: nothing(void)
 */

void print_most_numbers(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
			_putchar(i);
		i++;
	}
	_putchar('\n');

}
