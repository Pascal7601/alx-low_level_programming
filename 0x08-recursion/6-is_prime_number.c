#include "main.h"

/**
 * is_prime_number - returns prime numbers
 * @n: integer passed
 * Return: integer
 */
int is_prime_number(int n)
{
	return (_supporter(n, 2));
}
/**
 * _supporter - support function
 * @n: integer passed
 * @div: divisor
 * Return: integer
 */
int _supporter(int n, int div)
{
	if (n < 2)
		return (0);
	if (div * div > n)
		return (1);
	if (n % div == 0)
		return (0);
	return (_supporter(n, div + 1));
}
