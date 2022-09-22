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
	int ret;

	ret = s1[0] - s2[0];

	return (ret);
}
