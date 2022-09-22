#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string
 * @s2: string 2
 *
 * Return: comparison
 */

int _strcmp(char *s1, char *s2)
{
	int ret, i;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			break;
		}
		else
			ret = 0;
	}

	return (ret);
}
