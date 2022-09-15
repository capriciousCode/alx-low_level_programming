#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: nothing (void)
 */

void more_numbers(void)
{
	int i;
	char n, c;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
