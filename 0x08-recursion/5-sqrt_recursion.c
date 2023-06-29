#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: the number for square root
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return _support(n, 0);
}
/**
 * _support - helps the main function
 * @n: integer passed
 * @root: integer to be multiplied
 * Return: integer
 */
int _support(int n, int root)
{
	if (root == 1)
		return (1);
	return (root * (_support(n, root + 1)));
}
