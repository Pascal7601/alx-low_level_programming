#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - prints everything
* @format: the argumebt passed
* Return: void
*/
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int h = 0;

	va_list(any);

	va_start(any, format);

	while (format[h] != '\0')
	{
		if (format[h] == 'c')
		{
			c = va_arg(any, int);
			printf("%c", c);
		}
		else if (format[h] == 'i')
		{
			i = va_arg(any, int);
			printf("%d", i);
		}
		else if (format[h] == 'f')
		{
			f = va_arg(any, double);
			printf("%f", f);
		}
		else if (format[h] == 's')
		{
			s = va_arg(any, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
		}
		h++;
	}
	va_end(any);
	printf("\n");
}
