#include "main.h"

/**
 * times_table-prints 9 times table
 *
 * Return: 9 times table
 *
 */

void times_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			num3 = num1 * num2;
			if (num2 == 0)
				_putchar(num3 + '0');
			if (num2 != 0 && num3 < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');

			}
			else if (num3 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}

		}
		_putchar('\n');
	}


}
