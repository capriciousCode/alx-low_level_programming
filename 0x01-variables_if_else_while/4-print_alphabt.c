#include <stdio.h>

/**
  *main-Entry Point=>prints letters of the alphabet except e and q
  *Return: 0 (success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
		putchar('\n');
	return (0);
}
