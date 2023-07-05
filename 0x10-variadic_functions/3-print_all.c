#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints everything
* @format: the argumebt passed
* Return: void
*/
void print_all(const char * const format, ...)
{
	int h = 0;
	char* s;

	va_list(any);

	va_start(any, format);

	while (format[h] != '\0')
	{
		if (format[h] == 'c')
		{
			printf("%c", va_arg(any, int));
		}
		else if (format[h] == 'i')
		{
			printf("%d", va_arg(any, int));
		}
		else if (format[h] == 'f')
		{
			printf("%f", va_arg(any, double));
		}
		else if (format[h] == 's')
		{
			s = va_arg(any, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			else
			{
				printf(", %s", s);
			}
		}
		h++;
	}
	va_end(any);
	printf("\n");
}
