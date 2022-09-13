#include "main.h"

/**
 * jack_bauer-prints 24 hours
 *
 * Return: 24 hours
 *
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				_putchar('0');
				_putchar(hours + '0');

			}
			else if (hours >= 10)
			{
				_putchar((hours / 10) + '0');
				_putchar((hours % 10) + '0');
			}
			if (minutes < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minutes + '0');
			}
			else if (minutes >= 10)
			{
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
