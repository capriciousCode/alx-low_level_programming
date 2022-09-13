#include "main.h"

/**
 * print_alphabet - prints the alphabet from a-z
 *
 * Return: void
 *
 */

void print_alphabet(void)
{
	int ret = 'a';

	while (ret <= 'z')
	{
		_putchar(ret);
		ret++;
	}
	_putchar('\n');
}
