#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string variable
 *
 * Return: copy of str
 */

char *_strdup(char *str)
{
	char *newString;
	int i = 0;

	newString = (char *)malloc(sizeof(char) * _strlen(str) + 1);

	if (str == NULL)
		return (NULL);

	if (newString == NULL)
		return (NULL);

	while (*str)
		newString[i++] = *str++;
	newString[i] = '\0';

	return (newString);
}

/**
 * _strlen - returns length of a string
 *
 * @s: The string
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
