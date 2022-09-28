#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string parameter
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(1 + s));
}
