#include <stdio.h>
void func(void) __attribute__ ((constructor));
/**
 * func - prints a string before main function
 * Returns: nothing
*/
void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
