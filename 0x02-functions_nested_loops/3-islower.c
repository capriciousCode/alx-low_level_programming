#include "main.h"

/**
 * _islower-Checks to see if letter is lower or uppercase
 *
 * @c: letter being checked for lower or uppercase
 *
 * Return: 1 for lower, 0 for upper
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
