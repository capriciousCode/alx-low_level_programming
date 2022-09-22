#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: string parameter
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	int a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (j = 0; str[j] != '\0'; j++)
	{
		for (i = 0; a[i] != 0; i++)
		{
			if (str[j] == a[i])
				str[j] = b[i];
		}
	}

	return (str);
}
