#include <stdio.h>

/**
  *main-print all possible combinations of 3 digits
  *
  *Return: 0 (Success)
  */

int main(void)
{
int num1, num2, num3;

/*using ascii codes because not allowed to use type char*/

for (num1 = 48; num1 < 56; num1++)
{
	for (num2 = num1 + 1; num2 < 57; num2++)
	{
		for (num3 = num2 + 1; num3 < 58; num3++)
		{
			putchar(num1);
			putchar(num2);
			putchar(num3);
			if (num1 < 55 && num2 <= 56 && num3 <= 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
