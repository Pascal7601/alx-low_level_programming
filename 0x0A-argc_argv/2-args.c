#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int p = 0;

	while (p < argc)
	{
		printf("%s\n", argv[p]);
		p++;
	}
	return (0);
}
