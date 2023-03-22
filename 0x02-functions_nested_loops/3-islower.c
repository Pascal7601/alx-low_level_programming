#include "main.h"

/**
 * main - Entry Point
 * Description: 'Checks for lowercase characters'
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

