#include "main.h"

/**
 * _strcopy - copies a string
 *
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
