#include "main.h"

/**
 * main - Entry Point
 * Description: 'Prints alphabets in lowercase'
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

