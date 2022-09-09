#include <stdio.h>

/**
  *main-Entry Point=>prints letters of the alphabet in lowercase and uppercase
  *Return: 0 (success)
  */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
		putchar('\n');
	return (0);
}
