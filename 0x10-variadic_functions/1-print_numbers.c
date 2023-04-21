#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: number to be printed
 * Return: numbers printed
 *@separator: string to be printed between characters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int num;

	va_start(pa, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(pa, unsigned int));
		if (num != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pa);
}
