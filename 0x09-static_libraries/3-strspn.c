#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string param
 * @accept: substring
 *
 * Return: number of bytes in initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int init_length = 0;
	unsigned int len1 = _strlen(s);
	unsigned int len2 = _strlen(accept);
	unsigned int i, j;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				init_length++;
				break;
			}
			else if ((accept[j + 1]) == '\0')
				return (init_length);
		}
	}


	return (init_length);
}

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
