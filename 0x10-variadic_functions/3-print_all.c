#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *  print_all - prints anything
 * @format: list of types of arguments passed to a function.
 * Returns: nothing
 */

void print_all(const char * const format, ...)
{
	int p = 0;
	char *str, *sn = "";

	va_list lis;

	va_start(lis, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", sn, va_arg(lis, int));
					break;
				case 'i':
					printf("%s%d", sn, va_arg(lis, int));
					break;
				case 'f':
					printf("%s%f", sn, va_arg(lis, double));
					break;
				case 's':
					str = va_arg(lis, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sn, str);
					break;
				default:
					p++;
					continue;
			}
			sn = ", ";
			p++;
		}
	}

	printf("\n");
	va_end(lis);
}
