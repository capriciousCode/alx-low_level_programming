#include "main.h"

/**
 * print_times_table-print n times table starting with zero
 * @n: parameter
 *
 * Return: n times table
 */

void print_times_table(int n)
{
	int num1, num2, num3;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				num3 = num1 * num2;
				if (num2 == 0)
				{
					_putchar(num3 + '0');
				} else if (num3 < 10 && num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num3 + '0');
				}
				else if (num3 >= 10 && num3 < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num3 / 10) + '0');
					_putchar((num3 % 10) + '0');
				} else if (num3 >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num3 / 100) + '0');
					_putchar(((num3 / 10) % 10) + '0');
					_putchar((num3 % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

