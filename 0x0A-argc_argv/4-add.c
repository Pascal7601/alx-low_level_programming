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

	num = atoi(argv[1]);

	if (argc < 2)
	{
		printf("0\n");
	}
	if (num > 0)
		sum += num;
	printf("%d", sum);
	return (0);
}

