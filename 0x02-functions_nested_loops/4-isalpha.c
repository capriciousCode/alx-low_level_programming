#include "main.h"

/**
 * _isalpha-checks if character is an alphabet character
 *
 * @c: the character being checked
 *
 * Return: 1 if alphabet and 0 if not
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
