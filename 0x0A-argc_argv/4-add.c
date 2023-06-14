#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

		if (num > 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

