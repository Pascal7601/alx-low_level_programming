#include <stdio.h>
/**
* main - Entry Point
*  Return: Always 0 (Success)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int l;
	float f;

	printf("Size of char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of long int: %lu byte(s)\n", sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", sizeof(l));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
