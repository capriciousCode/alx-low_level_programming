#include <stdio.h>

/**
  *main-Entry Point=>print from 0-9 using printchar without char variables
  *Return: 0 (success)
  */

int main(void)
{
	/* Corresponding ASCII value for 0 key on keyboard */
	int num = 48;

	/*58 being the corresponding value for 10 ie while num < 10 */
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
