#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers in a list
 * @separator: string
 * @n: number of integers printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(num);

	va_start(num, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}

