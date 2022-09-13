#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet from a-z 10 times
 *
 * Return: void
 *
 */

void print_alphabet_x10(void)
{
	int ret, numTimes;

	for (numTimes = 0; numTimes < 10; numTimes++)
	{
		for (ret = 'a'; ret <= 'z'; ret++)
		{
			_putchar(ret);
		}
		_putchar('\n');

	}

}
