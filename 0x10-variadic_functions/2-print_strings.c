#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 * @separator: sparates string
 * @n: number
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	char *str;

	va_list(prstring);

	va_start(prstring, n);

	if (separator == NULL)
		return;

	for (p = 0; p < n; p++)
	{
		str = va_arg(prstring, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (p < n - 1)
			printf("%s", separator);
	}
	va_end(prstring);
	printf("\n");
}
