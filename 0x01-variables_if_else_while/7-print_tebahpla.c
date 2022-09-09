#include <stdio.h>

/**
  *main-Entry Point=>prints letters of the alphabet in lowercase in reverse
  *Return: 0 (success)
  */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
		putchar('\n');
	return (0);
}
