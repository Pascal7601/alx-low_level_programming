#include "main.h"

/**
 * main - Entry Point
 * Description: 'Prints alphabets'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

