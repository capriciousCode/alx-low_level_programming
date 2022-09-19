#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string being printed
 *
 * Return: nothing(void)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
		_putchar(str[i]);
	_putchar('\n');
}

/**
 * _strlen - get length of string
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
