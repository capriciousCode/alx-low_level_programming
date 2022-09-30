#include "main.h"

/**
 *_strncat - concatenates 2 strings
 *
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to be concatenated
 *
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len1 = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len1 + i] = src[i];
	dest[len1 + i] = '\0';
	return (dest);
}

/**
 * _strlen -  returns length of string
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
