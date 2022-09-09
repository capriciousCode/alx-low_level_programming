#include <stdio.h>

/**
  *main-Entry Point=>prints all combinations of single digits
  *Return: 0 (success)
  */

int main(void)
{
	/*ASCII code for zero */
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	return (0);
}
