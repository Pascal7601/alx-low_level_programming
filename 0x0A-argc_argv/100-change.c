#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints the minimum number of coins.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success), 1(Error)
 */

int main(int argc, char *argv[])
{

	int val, n, res;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	val = atoi(argv[1]);
	res = 0;

	if (res < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && val >= 0; n++)
	{
		while (val >= coins[n])
		{
			res++;
			val -= coins[n];
		}
	}

	printf("%d\n", res);
	return (0);
}
