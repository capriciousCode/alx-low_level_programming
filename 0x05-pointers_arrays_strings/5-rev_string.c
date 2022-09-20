#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string being reversed
 *
 * Return: nothing(void)
 */

void rev_string(char *s)
{
	int i = 0, j = (_strlen(s) - 1);
	char temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}

}

/**
 * _strlen - gets length of string
 *
 * @s: string parameter
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; i < s[i]; i++)
		;
	return (i);
}
