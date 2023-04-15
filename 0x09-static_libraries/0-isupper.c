#include "main.h"

/**
 * _isupper- checks whether the letter is uppercase
 * returns 1 if uppercase and 0 if otherwise
 * @a:Variable text
 * Return: Always 0
 */
int _isupper(int c)
{
	if((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
