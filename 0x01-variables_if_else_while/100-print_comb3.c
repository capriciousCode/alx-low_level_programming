#include <stdio.h>

/**
  *main-Entry Point=>print smallest combinations of single digit numbers
  *Return: 0 (success)
  */

int main(void)
{
	int num1, num2;
	/*using ascii codes because not allowed to use char*/
	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = num1 + 1; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 < 56 && num2 < 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
