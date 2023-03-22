#include "main.h"

/**
 * main - Enrty Point
 * Description: 'Prints last digit of a number'
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar (-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
