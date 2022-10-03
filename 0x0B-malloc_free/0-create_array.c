#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: characters
 *
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
