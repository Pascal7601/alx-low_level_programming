#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all parameters.
 * @n: integer to be returned.
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count = 0 , sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	while (count < n)
	{
		sum += va_arg(ap, unsigned int);
		count++;
	}
	va_end(ap);
	return (sum);
}
