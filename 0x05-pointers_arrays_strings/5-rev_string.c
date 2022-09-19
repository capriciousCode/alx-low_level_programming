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
	int i, l, t;

	l = _strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		t = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
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
