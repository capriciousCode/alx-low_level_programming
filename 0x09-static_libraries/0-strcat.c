#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, len1, len2;

	len1 = _strlen(dest);
	len2 = _strlen(src);

	for (i = 0; i <= len2; i++)
		dest[len1 + i] = src[i];

	return (dest);
}

/**
 * _strlen - returns the length of a string
 *
 *@s: string parameter
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
