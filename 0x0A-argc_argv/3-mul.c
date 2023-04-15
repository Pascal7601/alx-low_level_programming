#include <stdio.h>
#include "main.h"

/**
 * __atoi - converts string to integer
 * @p: srting to be converted
 * Return: the integer converted to string
 */
int __atoi(char *p)
{
	int i, f, g, len, h, digit;

	i = 0;
	f = 0;
	g = 0;
	len = 0;
	h = 0;
	digit = 0;

	while (p[len] != '\0')
		len++;
	while (i < len && h == 0)
	{
		if (p[i] == '-')
			++f;
		if (p[i] >= '0' && p[i] <= '9')
		{
			digit = p[i] - '0';
			if (f % 2)
				digit = -digit;
			g = g * 10 + digit;
			h = 1;
			if (p[i + 1] < '0' || p[i + 1] > '9')
				break;
			h = 0;
		}
		i++;
	}
	if (h == 0)
		return (0);
	return (g);
}
/**
 * main -  a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0(Success), 1(Error)
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc < 3 || argc > 3)
	{

		printf("Error\n");
		return (1);
	}

	a = __atoi(argv[1]);
	b = __atoi(argv[2]);
	mul = a * b;

	printf("%d\n", mul);

	return (0);
}
