#include "main.h"

/**
 *  _strlen_recursion:  function that returns the length of a string.
 * @s: prints length of a string
 *Return: void
 */
int _strlen_recursion(char *s)
{
	int length = 0;
	
	if (*s)
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return length;
}
