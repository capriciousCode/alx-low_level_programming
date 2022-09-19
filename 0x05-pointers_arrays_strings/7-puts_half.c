#include "main.h"

/**
 * puts_half - prints half a string
 *
 * @str: string parameter
 *
 * Return: nothing (void)
 */

void puts_half(char *str)
{
	int len = _strlen(str);

	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len + 1) / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}

/**
 *_strlen - gets length of string
 *
 *@s: string parameter
 *
 *Return: length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; i < s[i]; i++)
		;
	return (i);
}
