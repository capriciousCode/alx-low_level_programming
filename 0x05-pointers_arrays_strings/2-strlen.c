#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: string parameter
 *
 * Return: the length of s
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;	
	return (i);
}
