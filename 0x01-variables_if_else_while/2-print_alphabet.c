#include <stdio.h>

/**
  *main-Entry Point=>prints letters of the alphabet in lowercase
  *Return: 0 (success)
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
		putchar('\n');
	return (0);
}
