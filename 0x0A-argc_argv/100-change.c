#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num, i;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 10 && num < 25)
			10 / num;
	}
	printf("%d\n", num);
	return (0);
}

