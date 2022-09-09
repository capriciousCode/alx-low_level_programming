#include <stdio.h>

/**
  *main-Entry Point=>prints all the numbers in base 16
  *Return: 0 (success)
  */

int main(void)
{
	char num = '0';
	char let = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (let < 'g')
	{
		putchar(let);
		let++;
	}
	putchar('\n');
	return (0);
}
