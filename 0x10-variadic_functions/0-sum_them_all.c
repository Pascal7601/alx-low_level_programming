#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: integer passed
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list(add);

	va_start(add, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(add, int);
	va_end(add);
	return (sum);
}
