#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'Prints alphabet lowercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
