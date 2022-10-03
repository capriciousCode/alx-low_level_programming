#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory
 * containing the concatenated strings or NULL if unsuccessful
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int s1_len = _strlen(s1);
	int s2_len = _strlen(s2);
	int size = s1_len + s2_len + 1;
	char *concat = malloc(size * sizeof(char));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		concat[s1_len + i] = s2[i];

	concat[size - 1] = '\0';

	return (concat);
}

/**
 * _strlen - returns length of string
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
