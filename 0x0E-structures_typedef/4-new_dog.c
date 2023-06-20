#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to name of dog
 * @age: float
 * @owner: pointer name of dog's owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}

