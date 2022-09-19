#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: nothing(void)
 */

void print_rev(char *s)
{
	int length, i;

	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
/**
 * _strlen - prints length of string
 *
 * @s: string parameter
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
