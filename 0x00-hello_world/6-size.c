#include <stdio.h>
/**
* main - Entry Point
*  Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
