#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: argument count on the command line
 * @argv: array of characters
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}


