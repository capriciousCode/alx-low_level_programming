
#include "main.h"
/**
* is_prime_number - returns true if the number is prime
*
*@n: the number to check
*
*Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	int x = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, x));
}

/**
* is_prime - returns 1 if number is prime
*
* @num: number to be checked
* @begin: number to start checking from
*
* Return: 1 if n is prime, 0 otherwise
*/

int is_prime(int num, int begin)
{
	if (begin <= 1)
		return (1);
	else if (num % begin == 0)
		return (0);
	return (is_prime(num, begin - 1));
}
