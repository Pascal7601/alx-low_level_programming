#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a sruct_dog
 * @d: pointer to the structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
		printf("Name: %s\n", d->name);
	if (d->age < 0.0)
		printf("Name: (nil)");
	else
		printf("Age: %6f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}

